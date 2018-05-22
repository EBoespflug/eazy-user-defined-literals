#ifndef EAZY_USERDEFINED_LITERALS
#define EAZY_USERDEFINED_LITERALS

#include <cstddef>

#include "ezl_util.hpp"
#include "ezl_raw.hpp"
#include "ezl_num.hpp"
#include "ezl_char.hpp"
#include "ezl_str.hpp"

// ALIASES
#define EZL_MAKE(type_, name_) EZL_MAKE_STR_I(type_, name_)
#define EZL_MAKE_C(type_, name_) EZL_MAKE_STR_C(type_, name_)

#endif // EAZY_USERDEFINED_LITERALS
