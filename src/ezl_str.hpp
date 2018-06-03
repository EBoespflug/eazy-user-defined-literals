/**
 * ezl_str.hpp
 * Etienne Boespflug - 2018
 *
 * This file contains the strings function macros for
 * creating user-defined literals (EZL_MAKE_STR*).
 *
 * This software has no license, feel free to use,
 * modify and distribute.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY
 * OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
 * LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef EAZY_USERDEFINED_LITERALS_STR
#define EAZY_USERDEFINED_LITERALS_STR

#include "ezl_util.hpp"
#include <cstddef>

// (const char*, std::size_t)

/**
 * Creates a string user-defined literal with the specifiers_,
 * the name_ (prefixed with an underscore) and body instructions
 * (call_, which is expanded with the variadic arguments).
 *
 * The arguments of the UDL operator are a (of type const char*)
 * and b (of type std::size_t).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param call_         The function macro to be expanded
 *      with the variadic argument.
 *
 * @see EZL_MAKE_GEN2_CPL
 */
#define EZL_MAKE_STR_CPL(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN2_CPL(specifiers_, name_, const char*, std::size_t, call_, __VA_ARGS__)

/**
 * Creates a string user-defined literal with the specifiers_,
 * the name_ (prefixed with an underscore) and body instructions
 * (body_, which is a direct preprocessor replacement).
 *
 * The arguments of the UDL operator are a (of type const char*)
 * and b (of type std::size_t).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param body_         The macro constituting the body
 *      argument.
 *
 * @see EZL_MAKE_GEN2_CPL_D
 */
#define EZL_MAKE_STR_CPL_D(specifiers_, name_, body_) \
    EZL_MAKE_GEN2_CPL_D(specifiers_, name_, const char*, std::size_t, body_)

/**
 * Creates a string user-defined literal with the specifiers_
 * and the name_ (prefixed with an underscore) converting the
 * string literal argument in type_.
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the string literal
 * will be converted.
 *
 * @see EZL_MAKE_STR_CPL_D
 */
#define EZL_MAKE_STR(specifiers_, type_, name_) EZL_MAKE_STR_CPL_D(specifiers_, name_, return type_(a);)

/**
 * Creates an inline string user-defined literal with the
 * specifiers_ and the name_ (prefixed with an underscore)
 * converting the string literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_STR
 * with inline specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the string literal
 * will be converted.
 *
 * @see EZL_MAKE_STR
 */
#define EZL_MAKE_STR_I(type_, name_) EZL_MAKE_STR(inline, type_, name_)

/**
 * Creates a constexpr string user-defined literal with the
 * specifiers_ and the name_ (prefixed with an underscore)
 * converting the string literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_STR
 * with constexpr specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the string literal
 * will be converted.
 *
 * @see EZL_MAKE_STR
 */
#define EZL_MAKE_STR_C(type_, name_) EZL_MAKE_STR(constexpr, type_, name_)

// (const wchar_t*, std::size_t)

/**
 * Creates a wide-string user-defined literal with the specifiers_,
 * the name_ (prefixed with an underscore) and body instructions
 * (call_, which is expanded with the variadic arguments).
 *
 * The arguments of the UDL operator are a (of type const wchar_t*)
 * and b (of type std::size_t).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param call_         The function macro to be expanded
 *      with the variadic argument.
 *
 * @see EZL_MAKE_GEN2_CPL
 */
#define EZL_MAKE_WSTR_CPL(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN2_CPL(specifiers_, name_, const wchar_t*, std::size_t, call_, __VA_ARGS__)

/**
 * Creates a wide-string user-defined literal with the specifiers_,
 * the name_ (prefixed with an underscore) and body instructions
 * (body_, which is a direct preprocessor replacement).
 *
 * The arguments of the UDL operator are a (of type const wchar_t*)
 * and b (of type std::size_t).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param body_         The macro constituting the body
 *      argument.
 *
 * @see EZL_MAKE_GEN2_CPL_D
 */
#define EZL_MAKE_WSTR_CPL_D(specifiers_, name_, body_) \
    EZL_MAKE_GEN2_CPL_D(specifiers_, name_, const wchar_t*, std::size_t, body_)

/**
 * Creates a wide-string user-defined literal with the specifiers_
 * and the name_ (prefixed with an underscore) converting the
 * string literal argument in type_.
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the string literal
 * will be converted.
 *
 * @see EZL_MAKE_WSTR_CPL_D
 */
#define EZL_MAKE_WSTR(specifiers_, type_, name_) EZL_MAKE_WSTR_CPL_D(specifiers_, name_, type_(a);)

/**
 * Creates an inline wide-string user-defined literal with
 * the specifiers_ and the name_ (prefixed with an underscore)
 * converting the string literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_WSTR
 * with inline specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the string literal
 * will be converted.
 *
 * @see EZL_MAKE_WSTR
 */
#define EZL_MAKE_WSTR_I(type_, name_) EZL_MAKE_WSTR(inline, type_, name_)
/**
 * Creates a constexpr wide-string user-defined literal with
 * the specifiers_ and the name_ (prefixed with an underscore)
 * converting the string literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_WSTR
 * with constexpr specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the string literal
 * will be converted.
 *
 * @see EZL_MAKE_WSTR
 */
#define EZL_MAKE_WSTR_C(type_, name_) EZL_MAKE_WSTR(constexpr, type_, name_)

// (const char16_t*, std::size_t)
/**
 * Creates a char16_t string user-defined literal with the specifiers_,
 * the name_ (prefixed with an underscore) and body instructions
 * (call_, which is expanded with the variadic arguments).
 *
 * The arguments of the UDL operator are a (of type const char16_t*)
 * and b (of type std::size_t).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param call_         The function macro to be expanded
 *      with the variadic argument.
 *
 * @see EZL_MAKE_GEN2_CPL
 */
#define EZL_MAKE_STR16_CPL(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN2_CPL(specifiers_, name_, const char16_t*, std::size_t, call_, __VA_ARGS__)

/**
 * Creates a char16_t string user-defined literal with the specifiers_,
 * the name_ (prefixed with an underscore) and body instructions
 * (body_, which is a direct preprocessor replacement).
 *
 * The arguments of the UDL operator are a (of type const char16_t*)
 * and b (of type std::size_t).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param body_         The macro constituting the body
 *      argument.
 *
 * @see EZL_MAKE_GEN2_CPL_D
 */
#define EZL_MAKE_STR16_CPL_D(specifiers_, name_, body_) \
    EZL_MAKE_GEN2_CPL_D(specifiers_, name_, const char16_t*, std::size_t, body_)

/**
 * Creates a char16_t string user-defined literal with the specifiers_
 * and the name_ (prefixed with an underscore) converting the
 * string literal argument in type_.
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the string literal
 * will be converted.
 *
 * @see EZL_MAKE_STR16_CPL_D
 */
#define EZL_MAKE_STR16(specifiers_, type_, name_) EZL_MAKE_STR16_CPL_D(specifiers_, name_, type_(a);)

/**
 * Creates an inline char16_t string user-defined literal with
 * the specifiers_ and the name_ (prefixed with an underscore)
 * converting the string literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_STR16
 * with inline specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the string literal
 * will be converted.
 *
 * @see EZL_MAKE_STR16
 */
#define EZL_MAKE_STR16_I(type_, name_) EZL_MAKE_STR16(inline, type_, name_)
/**
 * Creates a constexpr char16_t string user-defined literal with
 * the specifiers_ and the name_ (prefixed with an underscore)
 * converting the string literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_STR16
 * with constexpr specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the string literal
 * will be converted.
 *
 * @see EZL_MAKE_STR16
 */
#define EZL_MAKE_STR16_C(type_, name_) EZL_MAKE_STR16(constexpr, type_, name_)

// (const char32_t*, std::size_t)
/**
 * Creates a char32_t string user-defined literal with the specifiers_,
 * the name_ (prefixed with an underscore) and body instructions
 * (call_, which is expanded with the variadic arguments).
 *
 * The arguments of the UDL operator are a (of type const char32_t*)
 * and b (of type std::size_t).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param call_         The function macro to be expanded
 *      with the variadic argument.
 *
 * @see EZL_MAKE_GEN2_CPL
 */
#define EZL_MAKE_STR32_CPL(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN2_CPL(specifiers_, name_, const char32_t*, std::size_t, call_, __VA_ARGS__)

/**
 * Creates a char32_t string user-defined literal with the specifiers_,
 * the name_ (prefixed with an underscore) and body instructions
 * (body_, which is a direct preprocessor replacement).
 *
 * The arguments of the UDL operator are a (of type const char32_t*)
 * and b (of type std::size_t).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param body_         The macro constituting the body
 *      argument.
 *
 * @see EZL_MAKE_GEN2_CPL_D
 */
#define EZL_MAKE_STR32_CPL_D(specifiers_, name_, body_) \
    EZL_MAKE_GEN2_CPL_D(specifiers_, name_, const char32_t*, std::size_t, body_)

/**
 * Creates a char32_t string user-defined literal with the specifiers_
 * and the name_ (prefixed with an underscore) converting the
 * string literal argument in type_.
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the string literal
 * will be converted.
 *
 * @see EZL_MAKE_STR32_CPL_D
 */
#define EZL_MAKE_STR32(specifiers_, type_, name_) EZL_MAKE_STR32_CPL_D(specifiers_, name_, type_(a);)

/**
 * Creates an inline char32_t string user-defined literal with
 * the specifiers_ and the name_ (prefixed with an underscore)
 * converting the string literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_STR32
 * with inline specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the string literal
 * will be converted.
 *
 * @see EZL_MAKE_STR32
 */
#define EZL_MAKE_STR32_I(type_, name_) EZL_MAKE_STR32(inline, type_, name_)

/**
 * Creates a constexpr char32_t string user-defined literal with
 * the specifiers_ and the name_ (prefixed with an underscore)
 * converting the string literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_STR32
 * with constexpr specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the string literal
 * will be converted.
 *
 * @see EZL_MAKE_STR32
 */
#define EZL_MAKE_STR32_C(type_, name_) EZL_MAKE_STR32(constexpr, type_, name_)

#endif // EAZY_USERDEFINED_LITERALS_STR
