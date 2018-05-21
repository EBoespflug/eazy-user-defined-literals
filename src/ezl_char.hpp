#ifndef EAZY_USERDEFINED_LITERALS_CHAR
#define EAZY_USERDEFINED_LITERALS_CHAR

#include "ezl_util.hpp"

#include <cstddef>

// char
#define EZL_MAKE_CHAR_CPL_VA(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN_CPL_VA(specifiers_, name_, char, call_, __VA_ARGS__)

#define EZL_MAKE_CHAR_CPL(specifiers_, name_, call_) \
    EZL_MAKE_GEN_CPL(specifiers_, name_, char, call_)

#define EZL_MAKE_CHAR_CPL_D(specifiers_, name_, call_) \
    EZL_MAKE_GEN_CPL_D(specifiers_, name_, char, call_)

#define EZL_MAKE_CHAR(specifiers_, type_, name_) EZL_MAKE_CHAR_CPL_D(specifiers_, name_, return type_(a);)

#define EZL_MAKE_CHAR_I(type_, name_) EZL_MAKE_CHAR(inline, type_, name_)
#define EZL_MAKE_CHAR_C(type_, name_) EZL_MAKE_CHAR(constexpr, type_, name_)

// wchar_t
#define EZL_MAKE_WCHAR_CPL_VA(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN_CPL_VA(specifiers_, name_, wchar_t, call_, __VA_ARGS__)

#define EZL_MAKE_WCHAR_CPL(specifiers_, name_, call_) \
    EZL_MAKE_GEN_CPL(specifiers_, name_, wchar_t, call_)

#define EZL_MAKE_WCHAR_CPL_D(specifiers_, name_, call_) \
    EZL_MAKE_GEN_CPL_D(specifiers_, name_, wchar_t, call_)

#define EZL_MAKE_WCHAR(specifiers_, type_, name_) EZL_MAKE_WCHAR_CPL_D(specifiers_, name_, type_{a};)

#define EZL_MAKE_WCHAR_I(type_, name_) EZL_MAKE_WCHAR(inline, type_, name_)
#define EZL_MAKE_WCHAR_C(type_, name_) EZL_MAKE_WCHAR(constexpr, type_, name_)

// char16_t
#define EZL_MAKE_CHAR16_CPL_VA(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN_CPL_VA(specifiers_, name_, char16_t, call_, __VA_ARGS__)

#define EZL_MAKE_CHAR16_CPL(specifiers_, name_, call_) \
    EZL_MAKE_GEN_CPL(specifiers_, name_, char16_t, call_)

#define EZL_MAKE_CHAR16_CPL_D(specifiers_, name_, call_) \
    EZL_MAKE_GEN_CPL_D(specifiers_, name_, char16_t, call_)

#define EZL_MAKE_CHAR16(specifiers_, type_, name_) EZL_MAKE_CHAR16_CPL_D(specifiers_, name_, type_{a};)

#define EZL_MAKE_CHAR16_I(type_, name_) EZL_MAKE_CHAR16(inline, type_, name_)
#define EZL_MAKE_CHAR16_C(type_, name_) EZL_MAKE_CHAR16(constexpr, type_, name_)

// char32_t
#define EZL_MAKE_CHAR32_CPL_VA(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN_CPL_VA(specifiers_, name_, char32_t, call_, __VA_ARGS__)

#define EZL_MAKE_CHAR32_CPL(specifiers_, name_, call_) \
    EZL_MAKE_GEN_CPL(specifiers_, name_, char32_t, call_)

#define EZL_MAKE_CHAR32_CPL_D(specifiers_, name_, call_) \
    EZL_MAKE_GEN_CPL_D(specifiers_, name_, char32_t, call_)

#define EZL_MAKE_CHAR32(specifiers_, type_, name_) EZL_MAKE_CHAR32_CPL_D(specifiers_, name_, type_{a};)

#define EZL_MAKE_CHAR32_I(type_, name_) EZL_MAKE_CHAR32(inline, type_, name_)
#define EZL_MAKE_CHAR32_C(type_, name_) EZL_MAKE_CHAR32(constexpr, type_, name_)

#endif // EAZY_USERDEFINED_LITERALS_CHAR
