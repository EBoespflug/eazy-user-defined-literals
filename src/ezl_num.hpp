#ifndef EAZY_USERDEFINED_LITERALS_NUM
#define EAZY_USERDEFINED_LITERALS_NUM

// unsigned long long int
#define EZL_MAKE_INT_CPL_VA(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN_CPL_VA(specifiers_, name_, unsigned long long int, call_, __VA_ARGS__)

#define EZL_MAKE_INT_CPL(specifiers_, name_, call_) \
    EZL_MAKE_GEN_CPL(specifiers_, name_, unsigned long long int, call_)

#define EZL_MAKE_INT_CPL_D(specifiers_, name_, call_) \
    EZL_MAKE_GEN_CPL_D(specifiers_, name_, unsigned long long int, call_)

#define EZL_MAKE_INT(specifiers_, type_, name_) EZL_MAKE_INT_CPL_D(specifiers_, name_, type_{a};)

#define EZL_MAKE_INT_I(type_, name_) EZL_MAKE_INT(inline, type_, name_)
#define EZL_MAKE_INT_C(type_, name_) EZL_MAKE_INT(constexpr, type_, name_)

// long double
#define EZL_MAKE_FLOAT_CPL_VA(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN_CPL_VA(specifiers_, name_, long double, call_, __VA_ARGS__)

#define EZL_MAKE_FLOAT_CPL(specifiers_, name_, call_) \
    EZL_MAKE_GEN_CPL(specifiers_, name_, long double, call_)

#define EZL_MAKE_FLOAT_CPL_D(specifiers_, name_, call_) \
    EZL_MAKE_GEN_CPL_D(specifiers_, name_, long double, call_)

#define EZL_MAKE_FLOAT(specifiers_, type_, name_) EZL_MAKE_FLOAT_CPL_D(specifiers_, name_, type_{a};)

#define EZL_MAKE_FLOAT_I(type_, name_) EZL_MAKE_FLOAT(inline, type_, name_)
#define EZL_MAKE_FLOAT_C(type_, name_) EZL_MAKE_FLOAT(constexpr, type_, name_)

#endif // EAZY_USERDEFINED_LITERALS_NUM
