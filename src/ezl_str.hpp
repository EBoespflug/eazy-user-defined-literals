#ifndef EAZY_USERDEFINED_LITERALS_STRING
#define EAZY_USERDEFINED_LITERALS_STRING

// STRING.
/**
 * __VA_ARGS__ : macro call_ called with those args. use EZL_MAKE_STR_CPL if no * args.
 */
#define EZL_MAKE_STR_CPL_VA(specifiers_, name_, call_, ...) \
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

#define EZL_MAKE_STR(specifiers_, type_, name_) EZL_MAKE_STR_CPL_D(specifiers_, name_, type_{str};)

#define EZL_MAKE_STR_I(type_, name_) EZL_MAKE_STR(inline, type_, name_)
#define EZL_MAKE_STR_C(type_, name_) EZL_MAKE_STR(constexpr, type_, name_)

#endif // EAZY_USERDEFINED_LITERALS_STRING
