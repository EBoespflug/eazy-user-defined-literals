#ifndef EAZY_USERDEFINED_LITERALS_CHAR
#define EAZY_USERDEFINED_LITERALS_CHAR

#define EZL_MAKE_CHAR_CPL_VA_(specifiers_, name_, type_, call_, ...) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)([[maybe_unused]] type_ a) { \
        call_(__VA_ARGS__) \
    }

#define EZL_MAKE_STR_CPL_(specifiers_, name_, call_) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)(const char* a, [[maybe_unused]] std::size_t b) { \
      call_() \
    }

#define EZL_MAKE_STR_CPL_D_(specifiers_, name_, call_) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)(const char* a, [[maybe_unused]] std::size_t b) { \
       call_ \
    }

#define EZL_MAKE_STR(specifiers_, type_, name_) EZL_MAKE_STR_CPL_D(specifiers_, name_, type_{a};)

#define EZL_MAKE_STR_I(type_, name_) EZL_MAKE_STR(inline, type_, name_)
#define EZL_MAKE_STR_C(type_, name_) EZL_MAKE_STR(constexpr, type_, name_)

#endif // EAZY_USERDEFINED_LITERALS_CHAR
