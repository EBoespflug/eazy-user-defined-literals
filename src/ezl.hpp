#ifndef EAZY_USERDEFINED_LITERALS
#define EAZY_USERDEFINED_LITERALS

#include <cstddef>

#define EZL_STRINGCAT_FINAL_(S, T) S ## T
#define EZL_STRINGCAT(S, T) EZL_STRINGCAT_FINAL_(S, T)
#define EZL_JOIN(S1, separator_, S2) EZL_STRINGCAT(EZL_STRINGCAT(S1, separator_), S2)

/**
 * __VA_ARGS__ : macro call_ called with those args. use EZL_MAKE_STR_CPL if no * args.
 */
#define EZL_MAKE_STR_CPLVA(specifiers_, name_, call_, ...) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)(const char* str, [[maybe_unused]] std::size_t size) { \
        call_(__VA_ARGS__) \
    }

#define EZL_MAKE_STR_CPL(specifiers_, name_, call_) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)(const char* str, [[maybe_unused]] std::size_t size) { \
      call_() \
    }

#define EZL_MAKE_STR_CPL_D(specifiers_, name_, call_) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)(const char* str, [[maybe_unused]] std::size_t size) { \
       call_ \
    }

#define EZL_MAKE_STR_(specifiers_, type_, name_) EZL_MAKE_STR_CPL_D(specifiers_, name_, type_{str};)

#define EZL_MAKE_STR(type_, name_) EZL_MAKE_STR_(inline, type_, name_)
#define EZL_MAKE_STR_C(type_, name_) EZL_MAKE_STR_(constexpr, type_, name_)

#define EZL_MAKE(type_, name_) EZL_MAKE_STR(type_, name_)
#define EZL_MAKE_C(type_, name_) EZL_MAKE_STR_C(type_, name_)

#endif // EAZY_USERDEFINED_LITERALS
