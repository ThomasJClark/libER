/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct POSTURE_CONTROL_PARAM_GENDER_ST {
    short a000_rightElbowIO{ 0 };
    short a000_leftElbowIO{ 0 };
    short a000_bothLegsIO{ 0 };
    short a002_rightElbowIO{ 0 };
    short a002_leftElbowIO{ 0 };
    short a002_bothLegsIO{ 0 };
    short a003_rightElbowIO{ 0 };
    short a003_leftElbowIO{ 0 };
    short a003_bothLegsIO{ 0 };
    short a010_rightElbowIO{ 0 };
    short a010_leftElbowIO{ 0 };
    short a010_bothLegsIO{ 0 };
    short a012_rightElbowIO{ 0 };
    short a012_leftElbowIO{ 0 };
    short a012_bothLegsIO{ 0 };
    short a013_rightElbowIO{ 0 };
    short a013_leftElbowIO{ 0 };
    short a013_bothLegsIO{ 0 };
    short a014_rightElbowIO{ 0 };
    short a014_leftElbowIO{ 0 };
    short a014_bothLegsIO{ 0 };
    short a015_rightElbowIO{ 0 };
    short a015_leftElbowIO{ 0 };
    short a015_bothLegsIO{ 0 };
    short a016_rightElbowIO{ 0 };
    short a016_leftElbowIO{ 0 };
    short a016_bothLegsIO{ 0 };
    unsigned char pad[10];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::POSTURE_CONTROL_PARAM_GENDER_ST) == 64,
    "POSTURE_CONTROL_PARAM_GENDER_ST paramdef size does not match detected "
    "size");
