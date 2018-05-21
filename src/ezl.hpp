#ifndef EAZY_USERDEFINED_LITERALS
#define EAZY_USERDEFINED_LITERALS

#include <cstddef>

// UTIL.

#define EZL_STRINGCAT_FINAL_(S, T) S ## T
#define EZL_STRINGCAT(S, T) EZL_STRINGCAT_FINAL_(S, T)
#define EZL_JOIN(S1, separator_, S2) EZL_STRINGCAT(EZL_STRINGCAT(S1, separator_), S2)

#include "ezl_str.hpp"
#include "ezl_int.hpp"

// ALIASES
#define EZL_MAKE(type_, name_) EZL_MAKE_STR_I(type_, name_)
#define EZL_MAKE_C(type_, name_) EZL_MAKE_STR_C(type_, name_)

#endif // EAZY_USERDEFINED_LITERALS
