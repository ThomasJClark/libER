#pragma once

#include <cstddef>
#include <cstdint>
#include <algorithm>

#include <detail/liber_preprocessor.hpp>
#include <detail/literal_string.h>

/*
* A symbol repository header that pulls
* addresses of objects and functions from versioned
* .csv files. Check the root/symbols directory for more.
*/

namespace liber {
    template <literal_string Name>
    struct symbol;
    
#define LIBER_ADD_SYMBOL(NAME)       \
    template <>                      \
    struct symbol<#NAME> {           \
        static int value;            \
        static void* get() noexcept; \
    };

#include LIBER_INCLUDIFY(LIBER_TARGET_VERSION/LIBER_SYMBOL_LIST)

#undef LIBER_ADD_SYMBOL
}