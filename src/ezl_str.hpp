#ifndef EAZY_USERDEFINED_LITERALS_STR
#define EAZY_USERDEFINED_LITERALS_STR

// STRING.
/**
 * __VA_ARGS__ : macro call_ called with those args. use EZL_MAKE_STR_CPL if no * args.
 */
#define EZL_MAKE_STR_CPL_VA(specifiers_, name_, call_, ...) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)(const char* a, [[maybe_unused]] std::size_t b) { \
        call_(__VA_ARGS__) \
    }

#define EZL_MAKE_STR_CPL(specifiers_, name_, call_) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)(const char* a, [[maybe_unused]] std::size_t b) { \
      call_() \
    }

#define EZL_MAKE_STR_CPL_D(specifiers_, name_, call_) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)(const char* a, [[maybe_unused]] std::size_t b) { \
       call_ \
    }

#define EZL_MAKE_STR(specifiers_, type_, name_) EZL_MAKE_STR_CPL_D(specifiers_, name_, type_{a};)

#define EZL_MAKE_STR_I(type_, name_) EZL_MAKE_STR(inline, type_, name_)
#define EZL_MAKE_STR_C(type_, name_) EZL_MAKE_STR(constexpr, type_, name_)

#endif // EAZY_USERDEFINED_LITERALS_STR
