// preprocessor only.
#include "../src/ezl.hpp"

// STR
EZL_MAKE_STR_CPL_D(constexpr, test_str, auto s = std::to_string(a) + " hello !"; return a;)
EZL_MAKE_WSTR_CPL_D(static inline, test_wstr, auto = std::to_string(a) + " wchar_t"; s = "Hello : " + s; return s;)
EZL_MAKE_STR16_CPL_D(static inline, test_str16, auto = std::to_string(a) + " char16_t"; s = "Hello : " + s; return s;)
EZL_MAKE_STR32_CPL_D(static inline, test_str32, auto = std::to_string(a) + " char32_t"; s = "Hello : " + s; return s;)

EZL_MAKE_STR(constexpr, strtest, gato)
EZL_MAKE_WSTR(inline const, wtest, test)
EZL_MAKE_STR16(inline, test16, test)
EZL_MAKE_STR32(constexpr, test32, test)

// INT

EZL_MAKE_INT(constexpr, Integer, int)
EZL_MAKE_INT_I(nullptr_t, int)


#include "../src/ezl_undef.hpp"
