// preprocessor only.
#include "../src/ezl.hpp"

// STR
EZL_MAKE_STR_CPL_D(constexpr, test_str, auto s = std::to_string(a) + " hello !"; return a;)
EZL_MAKE_WSTR_CPL_D(static inline, test_wstr, auto = std::to_string(a) + " wchar_t"; s = "Hello : " + s; return s;)
EZL_MAKE_STR16_CPL_D(static inline, test_str16, auto = std::to_string(a) + " char16_t"; s = "Hello : " + s; return s;)
EZL_MAKE_STR32_CPL_D(static inline, test_str32, auto = std::to_string(a) + " char32_t"; s = "Hello : " + s; return s;)

EZL_MAKE_STR(constexpr, std::string, test_str)
EZL_MAKE_WSTR(inline const, std::wstring, test_wstr)
EZL_MAKE_STR16(inline, std::string, test_str16)
EZL_MAKE_STR32(constexpr, std::string, test_str32)

// CHAR
EZL_MAKE_CHAR_CPL_D(constexpr, test_char, auto s = std::to_string(a) + " hello !"; return s;)
EZL_MAKE_WCHAR_CPL_D(constexpr, test_wchar, auto s = std::to_string(a) + " hello !"; return s;)
EZL_MAKE_CHAR16_CPL_D(constexpr, test_char16, auto s = std::to_string(a) + " hello !"; return s;)
EZL_MAKE_CHAR32_CPL_D(constexpr, test_char32, auto s = std::to_string(a) + " hello !"; return s;)

EZL_MAKE_CHAR(constexpr, MyType<std::string>, test_char)
EZL_MAKE_WCHAR(constexpr, MyType<std::string>, test_wchar)
EZL_MAKE_CHAR16(constexpr, MyType<std::string>, test_char16)
EZL_MAKE_CHAR32(constexpr, MyType<std::string>, test_char32)

// INT

EZL_MAKE_INT(constexpr, Integer, int)
EZL_MAKE_INT_I(nullptr_t, int)


#include "../src/ezl_undef.hpp"
