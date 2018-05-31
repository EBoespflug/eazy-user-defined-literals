/**
 * ezl_raw.hpp
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

#ifndef EAZY_USERDEFINED_LITERALS_RAW
#define EAZY_USERDEFINED_LITERALS_RAW

// const char*

/**
 * Creates a raw user-defined literal with the specifiers_,
 * the name_ (prefixed with an underscore) and body instructions
 * (call_, which is expanded with the variadic arguments).
 *
 * The argument of the UDL operator is a (of type const char*).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param call_         The function macro to be expanded
 *      with the variadic argument.
 *
 * @see EZL_MAKE_GEN_CPL
 */
#define EZL_MAKE_RAW_CPL(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN_CPL(specifiers_, name_, const char*, call_, __VA_ARGS__)

/**
 * Creates a raw user-defined literal with the specifiers_,
 * the name_ (prefixed with an underscore) and body instructions
 * (body_, which is a direct preprocessor replacement).
 *
 * The argument of the UDL operator is a (of type const char*).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param body_         The function macro to be expanded
 *      with the variadic argument.
 *
 * @see EZL_MAKE_GEN_CPL_D
 */
#define EZL_MAKE_RAW_CPL_D(specifiers_, name_, body_) \
    EZL_MAKE_GEN_CPL_D(specifiers_, name_, const char*, body_)

/**
 * Creates a raw user-defined literal with the specifiers_
 * and the name_ (prefixed with an underscore) converting the
 * string literal argument in type_.
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the string literal
 * will be converted.
 *
 * @see EZL_MAKE_RAW_CPL_D
 */
#define EZL_MAKE_RAW(specifiers_, type_, name_) EZL_MAKE_RAW_CPL_D(specifiers_, name_, return type_(a);)

/**
 * Creates an inline raw user-defined literal with the specifiers_
 * and the name_ (prefixed with an underscore) converting the raw
 * string literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_RAW with inline
 * specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the string literal
 * will be converted.
 *
 * @see EZL_MAKE_RAW
 */
#define EZL_MAKE_RAW_I(type_, name_) EZL_MAKE_RAW(inline, type_, name_)
/**
 * Creates a constexpr raw user-defined literal with the specifiers_
 * and the name_ (prefixed with an underscore) converting the raw
 * string literal argument in type_.
 *
 * Helper function macro corresponding to EZL_MAKE_RAW with constexpr
 * specifier.
 *
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param type_         The type in which the string literal
 * will be converted.
 *
 * @see EZL_MAKE_RAW
 */
 #define EZL_MAKE_RAW_C(type_, name_) EZL_MAKE_RAW(constexpr, type_, name_)

#endif // EAZY_USERDEFINED_LITERALS_RAW
