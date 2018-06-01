/**
 * ezl_char.hpp
 * Etienne Boespflug - 2018
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

#ifndef EAZY_USERDEFINED_LITERALS_CHAR
#define EAZY_USERDEFINED_LITERALS_CHAR

#include "ezl_util.hpp"

#include <cstddef>

// char

/**
 * Creates an character user-defined literal with the specifiers_,
 * the name_ (prefixed with an underscore) and body instructions
 * (call_, which is expanded with the variadic arguments).
 *
 * The argument of the UDL operator is a (of type char).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param call_         The function macro to be expanded
 *      with the variadic argument.
 *
 * @see EZL_MAKE_GEN_CPL
 */
#define EZL_MAKE_CHAR_CPL(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN_CPL(specifiers_, name_, char, call_, __VA_ARGS__)

/**
 * Creates a character user-defined literal with the specifiers_,
 * the name_ (prefixed with an underscore) and body instructions
 * (body_, which is a direct preprocessor replacement).
 *
 * The argument of the UDL operator is a (of type char).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param body_         The macro constituting the body
 *      argument.
 *
 * @see EZL_MAKE_GEN_CPL_D
 */
#define EZL_MAKE_CHAR_CPL_D(specifiers_, name_, body_) \
    EZL_MAKE_GEN_CPL_D(specifiers_, name_, char, body_)

/**
 * Creates a character user-defined literal with the specifiers_
 * and the name_ (prefixed with an underscore) converting the
 * character literal argument in type_.
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the character literal
 * will be converted.
 *
 * @see EZL_MAKE_CHAR_CPL_D
 */
#define EZL_MAKE_CHAR(specifiers_, type_, name_) EZL_MAKE_CHAR_CPL_D(specifiers_, name_, return type_(a);)

/**
 * Creates an inline character user-defined literal with the specifiers_
 * and the name_ (prefixed with an underscore) converting the character
 * literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_CHAR with inline
 * specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the character literal
 * will be converted.
 *
 * @see EZL_MAKE_CHAR
 */
#define EZL_MAKE_CHAR_I(type_, name_) EZL_MAKE_CHAR(inline, type_, name_)
/**
 * Creates a constexpr character user-defined literal with the specifiers_
 * and the name_ (prefixed with an underscore) converting the character
 * literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_CHAR with constexpr
 * specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the character literal
 * will be converted.
 *
 * @see EZL_MAKE_CHAR
 */
#define EZL_MAKE_CHAR_C(type_, name_) EZL_MAKE_CHAR(constexpr, type_, name_)

// wchar_t

/**
 * Creates an wide-character user-defined literal with the
 * specifiers_, the name_ (prefixed with an underscore) and
 * body instructions (call_, which is expanded with the variadic
 * arguments).
 *
 * The argument of the UDL operator is a (of type wchar_t).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param call_         The function macro to be expanded
 *      with the variadic argument.
 *
 * @see EZL_MAKE_GEN_CPL
 */
#define EZL_MAKE_WCHAR_CPL(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN_CPL(specifiers_, name_, wchar_t, call_, __VA_ARGS__)

/**
 * Creates a wide-character user-defined literal with the
 * specifiers_, the name_ (prefixed with an underscore) and
 * body instructions (body_, which is a direct preprocessor
 * replacement).
 *
 * The argument of the UDL operator is a (of type wchar_t).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param body_         The macro constituting the body
 *      argument.
 *
 * @see EZL_MAKE_GEN_CPL_D
 */
#define EZL_MAKE_WCHAR_CPL_D(specifiers_, name_, body_) \
    EZL_MAKE_GEN_CPL_D(specifiers_, name_, wchar_t, body_)

/**
 * Creates a wide-character user-defined literal with the
 * specifiers_ and the name_ (prefixed with an underscore)
 * converting the wide-character literal argument in type_.
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the wide-character
 * literal will be converted.
 *
 * @see EZL_MAKE_WCHAR_CPL_D
 */
#define EZL_MAKE_WCHAR(specifiers_, type_, name_) EZL_MAKE_WCHAR_CPL_D(specifiers_, name_, type_{a};)

/**
 * Creates an inline wide-character user-defined literal with the
 * specifiers_ and the name_ (prefixed with an underscore) converting
 * the wide-character literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_WCHAR with inline
 * specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the character literal
 * will be converted.
 *
 * @see EZL_MAKE_WCHAR
 */
#define EZL_MAKE_WCHAR_I(type_, name_) EZL_MAKE_WCHAR(inline, type_, name_)
/**
 * Creates a consexpr wide-character user-defined literal with the
 * specifiers_ and the name_ (prefixed with an underscore) converting
 * the wide-character literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_WCHAR with constexpr
 * specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the character literal
 * will be converted.
 *
 * @see EZL_MAKE_WCHAR
 */
#define EZL_MAKE_WCHAR_C(type_, name_) EZL_MAKE_WCHAR(constexpr, type_, name_)

// char16_t

/**
 * Creates an char16_t character user-defined literal with the
 * specifiers_, the name_ (prefixed with an underscore) and
 * body instructions (call_, which is expanded with the variadic
 * arguments).
 *
 * The argument of the UDL operator is a (of type char16_t).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param call_         The function macro to be expanded
 *      with the variadic argument.
 *
 * @see EZL_MAKE_GEN_CPL
 */
#define EZL_MAKE_CHAR16_CPL(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN_CPL(specifiers_, name_, char16_t, call_, __VA_ARGS__)


/**
 * Creates a char16_t character user-defined literal with the
 * specifiers_, the name_ (prefixed with an underscore) and
 * body instructions (body_, which is a direct preprocessor
 * replacement).
 *
 * The argument of the UDL operator is a (of type char16_t).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param body_         The macro constituting the body
 *      argument.
 *
 * @see EZL_MAKE_GEN_CPL_D
 */
#define EZL_MAKE_CHAR16_CPL_D(specifiers_, name_, body_) \
    EZL_MAKE_GEN_CPL_D(specifiers_, name_, char16_t, body_)

/**
 * Creates a char16_t character user-defined literal with the
 * specifiers_ and the name_ (prefixed with an underscore)
 * converting the char16_t character literal argument in type_.
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the char16_t character
 * literal will be converted.
 *
 * @see EZL_MAKE_CHAR16_CPL_D
 */
#define EZL_MAKE_CHAR16(specifiers_, type_, name_) EZL_MAKE_CHAR16_CPL_D(specifiers_, name_, type_{a};)

/**
 * Creates an inline char16_t character user-defined literal with the
 * specifiers_ and the name_ (prefixed with an underscore) converting
 * the char16_t character literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_CHAR16 with inline
 * specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the character literal
 * will be converted.
 *
 * @see EZL_MAKE_CHAR16
 */
#define EZL_MAKE_CHAR16_I(type_, name_) EZL_MAKE_CHAR16(inline, type_, name_)
/**
 * Creates a constexpr char16_t character user-defined literal with the
 * specifiers_ and the name_ (prefixed with an underscore) converting
 * the char16_t character literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_CHAR16 with constexpr
 * specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the character literal
 * will be converted.
 *
 * @see EZL_MAKE_CHAR16
 */
#define EZL_MAKE_CHAR16_C(type_, name_) EZL_MAKE_CHAR16(constexpr, type_, name_)

// char32_t

/**
 * Creates an char32_t character user-defined literal with the
 * specifiers_, the name_ (prefixed with an underscore) and
 * body instructions (call_, which is expanded with the variadic
 * arguments).
 *
 * The argument of the UDL operator is a (of type char32_t).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param call_         The function macro to be expanded
 *      with the variadic argument.
 *
 * @see EZL_MAKE_GEN_CPL
 */
#define EZL_MAKE_CHAR32_CPL(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN_CPL(specifiers_, name_, char32_t, call_, __VA_ARGS__)


/**
 * Creates a char32_t character user-defined literal with the
 * specifiers_, the name_ (prefixed with an underscore) and
 * body instructions (body_, which is a direct preprocessor
 * replacement).
 *
 * The argument of the UDL operator is a (of type char32_t).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param body_         The macro constituting the body
 *      argument.
 *
 * @see EZL_MAKE_GEN_CPL_D
 */
#define EZL_MAKE_CHAR32_CPL_D(specifiers_, name_, body_) \
    EZL_MAKE_GEN_CPL_D(specifiers_, name_, char32_t, body_)

/**
 * Creates a char32_t character user-defined literal with the
 * specifiers_ and the name_ (prefixed with an underscore)
 * converting the char32_t character literal argument in type_.
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the char32_t character
 * literal will be converted.
 *
 * @see EZL_MAKE_CHAR32_CPL_D
 */
#define EZL_MAKE_CHAR32(specifiers_, type_, name_) EZL_MAKE_CHAR32_CPL_D(specifiers_, name_, type_{a};)

/**
 * Creates an inline char32_t character user-defined literal with the
 * specifiers_ and the name_ (prefixed with an underscore) converting
 * the char32_t character literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_CHAR32 with inline
 * specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the character literal
 * will be converted.
 *
 * @see EZL_MAKE_CHAR32
 */
#define EZL_MAKE_CHAR32_I(type_, name_) EZL_MAKE_CHAR32(inline, type_, name_)
/**
 * Creates a consexpr char32_t character user-defined literal with the
 * specifiers_ and the name_ (prefixed with an underscore) converting
 * the char32_t character literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_CHAR32 with consexpr
 * specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the character literal
 * will be converted.
 *
 * @see EZL_MAKE_CHAR32
 */
#define EZL_MAKE_CHAR32_C(type_, name_) EZL_MAKE_CHAR32(constexpr, type_, name_)

#endif // EAZY_USERDEFINED_LITERALS_CHAR
