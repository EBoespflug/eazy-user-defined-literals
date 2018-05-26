#ifndef EAZY_USERDEFINED_LITERALS
#define EAZY_USERDEFINED_LITERALS

#include <cstddef>

#include "ezl_util.hpp"
#include "ezl_raw.hpp"
#include "ezl_num.hpp"
#include "ezl_char.hpp"
#include "ezl_str.hpp"

/**
 * Creates an inline user-defined literal with the suffix
 * name_ (prefixed with an underscore) converting the string
 * literal argument in type_.
 *
 * EZL_MAKE is an alias on the EZL_MAKE_STR_C function macro.
 *
 * @param type_ The type in which the string literal is
 *      converted.
 * @param name_ The name of the literal suffix (an underscore
 *      prefix is added to the name).
 *
 * @see EZL_MAKE_STR_I
 */
#define EZL_MAKE(type_, name_) EZL_MAKE_STR_I(type_, name_)

/**
* Creates a constexpr user-defined literal with the suffix
* name_ (prefixed with an underscore) converting the string
* literal argument in type_.
*
* EZL_MAKE_C is an alias on the EZL_MAKE_STR_C function macro.
*
* @param type_ The type in which the string literal is
*      converted.
* @param name_ The name of the literal suffix (an underscore
*      prefix is added to the name).
*
* @see EZL_MAKE_STR_C
*/
#define EZL_MAKE_C(type_, name_) EZL_MAKE_STR_C(type_, name_)

#endif // EAZY_USERDEFINED_LITERALS
