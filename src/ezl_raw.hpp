#ifndef EAZY_USERDEFINED_LITERALS_RAW
#define EAZY_USERDEFINED_LITERALS_RAW

// const char*
#define EZL_MAKE_RAW_CPL_VA(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN_CPL_VA(specifiers_, name_, const char*, call_, __VA_ARGS__)

#define EZL_MAKE_RAW_CPL(specifiers_, name_, call_) \
    EZL_MAKE_GEN_CPL(specifiers_, name_, const char*, call_)

#define EZL_MAKE_RAW_CPL_D(specifiers_, name_, call_) \
    EZL_MAKE_GEN_CPL_D(specifiers_, name_, const char*, call_)

#define EZL_MAKE_RAW(specifiers_, type_, name_) EZL_MAKE_RAW_CPL_D(specifiers_, name_, return type_(a);)

#define EZL_MAKE_RAW_I(type_, name_) EZL_MAKE_RAW(inline, type_, name_)
#define EZL_MAKE_RAW_C(type_, name_) EZL_MAKE_RAW(constexpr, type_, name_)

#endif // EAZY_USERDEFINED_LITERALS_RAW
