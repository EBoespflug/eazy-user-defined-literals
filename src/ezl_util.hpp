#ifndef EAZY_USERDEFINED_LITERALS_UTIL
#define EAZY_USERDEFINED_LITERALS_UTIL

#define EZL_STRINGCAT_FINAL_(S, T) S ## T
#define EZL_STRINGCAT(S, T) EZL_STRINGCAT_FINAL_(S, T)
#define EZL_JOIN(S1, separator_, S2) EZL_STRINGCAT(EZL_STRINGCAT(S1, separator_), S2)

#define EZL_MAKE_GEN_CPL_VA(specifiers_, name_, typeA_, call_, ...) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)([[maybe_unused]] typeA_ a) { \
        call_(__VA_ARGS__) \
    }

#define EZL_MAKE_GEN_CPL(specifiers_, name_, typeA_, call_) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)([[maybe_unused]] typeA_ a) { \
      call_() \
    }

#define EZL_MAKE_GEN_CPL_D(specifiers_, name_, typeA_, call_) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)([[maybe_unused]] typeA_ a) { \
       call_ \
    }

#define EZL_MAKE_GEN2_CPL_VA(specifiers_, name_, typeA_, typeB_, call_, ...) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)([[maybe_unused]] typeA_ a, [[maybe_unused]] typeB_ b) { \
        call_(__VA_ARGS__) \
    }

#define EZL_MAKE_GEN2_CPL(specifiers_, name_, typeA_, typeB_, call_) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)([[maybe_unused]] typeA_ a, [[maybe_unused]] typeB_ b) { \
      call_() \
    }

#define EZL_MAKE_GEN2_CPL_D(specifiers_, name_, typeA_, typeB_, call_) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)([[maybe_unused]] typeA_ a, [[maybe_unused]] typeB_ b) { \
       call_ \
    }

#endif // EAZY_USERDEFINED_LITERALS_UTIL
