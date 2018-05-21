#ifndef EAZY_USERDEFINED_LITERALS_STR
#define EAZY_USERDEFINED_LITERALS_STR

#include "ezl_util.hpp"
#include <cstddef>

// (const char*, std::size_t)
#define EZL_MAKE_STR_CPL_VA(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN2_CPL_VA(specifiers_, name_, const char*, std::size_t, call_, __VA_ARGS__)

#define EZL_MAKE_STR_CPL(specifiers_, name_, call_) \
    EZL_MAKE_GEN2_CPL(specifiers_, name_, const char*, std::size_t, call_)

#define EZL_MAKE_STR_CPL_D(specifiers_, name_, call_) \
    EZL_MAKE_GEN2_CPL_D(specifiers_, name_, const char*, std::size_t, call_)

#define EZL_MAKE_STR(specifiers_, type_, name_) EZL_MAKE_STR_CPL_D(specifiers_, name_, return type_(a);)

#define EZL_MAKE_STR_I(type_, name_) EZL_MAKE_STR(inline, type_, name_)
#define EZL_MAKE_STR_C(type_, name_) EZL_MAKE_STR(constexpr, type_, name_)

// (const wchar_t*, std::size_t)
#define EZL_MAKE_WSTR_CPL_VA(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN2_CPL_VA(specifiers_, name_, const wchar_t*, std::size_t, call_, __VA_ARGS__)

#define EZL_MAKE_WSTR_CPL(specifiers_, name_, call_) \
    EZL_MAKE_GEN2_CPL(specifiers_, name_, const wchar_t*, std::size_t, call_)

#define EZL_MAKE_WSTR_CPL_D(specifiers_, name_, call_) \
    EZL_MAKE_GEN2_CPL_D(specifiers_, name_, const wchar_t*, std::size_t, call_)

#define EZL_MAKE_WSTR(specifiers_, type_, name_) EZL_MAKE_WSTR_CPL_D(specifiers_, name_, type_{a};)

#define EZL_MAKE_WSTR_I(type_, name_) EZL_MAKE_WSTR(inline, type_, name_)
#define EZL_MAKE_WSTR_C(type_, name_) EZL_MAKE_WSTR(constexpr, type_, name_)

// (const char16_t*, std::size_t)
#define EZL_MAKE_STR16_CPL_VA(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN2_CPL_VA(specifiers_, name_, const char16_t*, std::size_t, call_, __VA_ARGS__)

#define EZL_MAKE_STR16_CPL(specifiers_, name_, call_) \
    EZL_MAKE_GEN2_CPL(specifiers_, name_, const char16_t*, std::size_t, call_)

#define EZL_MAKE_STR16_CPL_D(specifiers_, name_, call_) \
    EZL_MAKE_GEN2_CPL_D(specifiers_, name_, const char16_t*, std::size_t, call_)

#define EZL_MAKE_STR16(specifiers_, type_, name_) EZL_MAKE_STR16_CPL_D(specifiers_, name_, type_{a};)

#define EZL_MAKE_STR16_I(type_, name_) EZL_MAKE_STR16(inline, type_, name_)
#define EZL_MAKE_STR16_C(type_, name_) EZL_MAKE_STR16(constexpr, type_, name_)

// (const char32_t*, std::size_t)
#define EZL_MAKE_STR32_CPL_VA(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN2_CPL_VA(specifiers_, name_, const char32_t*, std::size_t, call_, __VA_ARGS__)

#define EZL_MAKE_STR32_CPL(specifiers_, name_, call_) \
    EZL_MAKE_GEN2_CPL(specifiers_, name_, const char32_t*, std::size_t, call_)

#define EZL_MAKE_STR32_CPL_D(specifiers_, name_, call_) \
    EZL_MAKE_GEN2_CPL_D(specifiers_, name_, const char32_t*, std::size_t, call_)

#define EZL_MAKE_STR32(specifiers_, type_, name_) EZL_MAKE_STR32_CPL_D(specifiers_, name_, type_{a};)

#define EZL_MAKE_STR32_I(type_, name_) EZL_MAKE_STR32(inline, type_, name_)
#define EZL_MAKE_STR32_C(type_, name_) EZL_MAKE_STR32(constexpr, type_, name_)

#endif // EAZY_USERDEFINED_LITERALS_STR
