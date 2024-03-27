#pragma once

#if defined(_ITERATOR_DEBUG_LEVEL) && _ITERATOR_DEBUG_LEVEL > 0
#error "_ITERATOR_DEBUG_LEVEL" must be defined as "0" for STL containers to be compatible with the ELDEN RING ABI.
#endif

#include <map>
#include <memory/from_allocator.h>

namespace from {
    template <typename K, typename V, typename Pred = std::less<K>, typename AllocatorTag = from::default_allocator_tag>
    using map = std::map<K, V, Pred, from::allocator<T, AllocatorTag>>;
}