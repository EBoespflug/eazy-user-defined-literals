#ifndef EAZY_USERDEFINED_LITERALS_INT
#define EAZY_USERDEFINED_LITERALS_INT

#define EZL_MAKE_INT_CPL_VA(specifiers_, name_, call_, ...) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)(unsigned long long a) { \
        call_(__VA_ARGS__) \
    }

#define EZL_MAKE_INT_CPL(specifiers_, name_, call_) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)(unsigned long long a) { \
      call_() \
    }

#define EZL_MAKE_INT_CPL_D(specifiers_, name_, call_) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)(unsigned long long int a) { \
       call_ \
    }

#define EZL_MAKE_INT(specifiers_, type_, name_) EZL_MAKE_INT_CPL_D(specifiers_, name_, type_{a};)

#define EZL_MAKE_INT_I(type_, name_) EZL_MAKE_INT(inline, type_, name_)
#define EZL_MAKE_INT_C(type_, name_) EZL_MAKE_INT(constexpr, type_, name_)

#endif // EAZY_USERDEFINED_LITERALS_INT
