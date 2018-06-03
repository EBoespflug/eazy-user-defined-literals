/**
 * ezl_num.hpp
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

#ifndef EAZY_USERDEFINED_LITERALS_NUM
#define EAZY_USERDEFINED_LITERALS_NUM

// unsigned long long int
/**
 * Creates an integer user-defined literal with the specifiers_,
 * the name_ (prefixed with an underscore) and body instructions
 * (call_, which is expanded with the variadic arguments).
 *
 * The argument of the UDL operator is a (of type unsigned long long).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param call_         The function macro to be expanded
 *      with the variadic argument.
 *
 * @see EZL_MAKE_GEN_CPL
 */
#define EZL_MAKE_INT_CPL(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN_CPL(specifiers_, name_, unsigned long long int, call_, __VA_ARGS__)

/**
 * Creates an integer user-defined literal with the specifiers_,
 * the name_ (prefixed with an underscore) and body instructions
 * (body_, which is a direct preprocessor replacement).
 *
 * The argument of the UDL operator is a (of type unsigned long long).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param body_         The function macro to be expanded
 *      with the variadic argument.
 *
 * @see EZL_MAKE_GEN_CPL_D
 */
#define EZL_MAKE_INT_CPL_D(specifiers_, name_, body_) \
    EZL_MAKE_GEN_CPL_D(specifiers_, name_, unsigned long long int, body_)

/**
 * Creates an integer user-defined literal with the specifiers_
 * and the name_ (prefixed with an underscore) converting the
 * integer literal argument in type_.
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the integer literal
 * will be converted.
 *
 * @see EZL_MAKE_INT_CPL_D
 */
#define EZL_MAKE_INT(specifiers_, type_, name_) EZL_MAKE_INT_CPL_D(specifiers_, name_, return type_(a);)

/**
 * Creates an inline integer user-defined literal with the specifiers_
 * and the name_ (prefixed with an underscore) converting the integer
 * literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_INT with inline
 * specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the integer literal
 * will be converted.
 *
 * @see EZL_MAKE_INT
 */
#define EZL_MAKE_INT_I(type_, name_) EZL_MAKE_INT(inline, type_, name_)
/**
 * Creates a constexpr integer user-defined literal with the specifiers_
 * and the name_ (prefixed with an underscore) converting the integer
 * literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_INT with constexpr
 * specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the integer literal
 * will be converted.
 *
 * @see EZL_MAKE_INT
 */
#define EZL_MAKE_INT_C(type_, name_) EZL_MAKE_INT(constexpr, type_, name_)

// long double

/**
 * Creates an floating point user-defined literal with the
 * specifiers_, the name_ (prefixed with an underscore) and
 * body instructions (call_, which is expanded with the
 * variadic arguments).
 *
 * The argument of the UDL operator is a (of type long double).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param call_         The function macro to be expanded
 *      with the variadic argument.
 *
 * @see EZL_MAKE_GEN_CPL
 */
#define EZL_MAKE_FLOAT_CPL(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN_CPL(specifiers_, name_, long double, call_, __VA_ARGS__)

/**
 * Creates a floating-point user-defined literal with the
 * specifiers_, the name_ (prefixed with an underscore) and
 * body instructions (body_, which is a direct preprocessor
 * replacement).
 *
 * The argument of the UDL operator is a (of type long double).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param body_         The function macro to be expanded
 *      with the variadic argument.
 *
 * @see EZL_MAKE_GEN_CPL_D
 */
#define EZL_MAKE_FLOAT_CPL_D(specifiers_, name_, body_) \
    EZL_MAKE_GEN_CPL_D(specifiers_, name_, long double, body_)

/**
 * Creates a floating-point user-defined literal with the
 * specifiers_ and the name_ (prefixed with an underscore)
 * converting the floating-point literal argument in type_.
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the floating-point
 *      literal will be converted.
 *
 * @see EZL_MAKE_FLOAT_CPL_D
 */
#define EZL_MAKE_FLOAT(specifiers_, type_, name_) EZL_MAKE_FLOAT_CPL_D(specifiers_, name_, type_(a);)

/**
 * Creates an inline floating-point user-defined literal with the
 * specifiers_ and the name_ (prefixed with an underscore) converting
 * the floating-point literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_FLOAT with inline
 * specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the floating-point
 *      literal will be converted.
 *
 * @see EZL_MAKE_FLOAT
 */
#define EZL_MAKE_FLOAT_I(type_, name_) EZL_MAKE_FLOAT(inline, type_, name_)
/**
 * Creates a constexpr floating-point user-defined literal with the
 * specifiers_ and the name_ (prefixed with an underscore) converting
 * the floating-point literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_FLOAT with constexpr
 * specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the floating-point
 *      literal will be converted.
 *
 * @see EZL_MAKE_FLOAT
 */
 #define EZL_MAKE_FLOAT_C(type_, name_) EZL_MAKE_FLOAT(constexpr, type_, name_)

#endif // EAZY_USERDEFINED_LITERALS_NUM
