/**
 * ezl_util.hpp
 * Etienne Boespflug - 2018
 *
 * This file contains the root function macros for
 * creating user-defined literals (EZL_MAKE_GEN*).
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

#ifndef EAZY_USERDEFINED_LITERALS_UTIL
#define EAZY_USERDEFINED_LITERALS_UTIL

/**
 * Concatenates two preprocessor tokens.
 */
#define EZL_STRINGCAT_FINAL_(S, T) S ## T
/**
 * Macro expansion helper for EZL_STRINGCAT_FINAL_
 */
#define EZL_STRINGCAT(S, T) EZL_STRINGCAT_FINAL_(S, T)
/**
 * Join two preprocessor tokens with the specified
 * separator.
 *
 * @see EZL_STRINGCAT
 */
#define EZL_JOIN(S1, separator_, S2) EZL_STRINGCAT(EZL_STRINGCAT(S1, separator_), S2)

/**
 * Creates an user-defined literal with the specifiers_, the
 * name_ (prefixed with an underscore) and body instructions
 * (call_, which is expanded with the variadic arguments).
 *
 * The argument of the UDL operator is a (of type typeA_).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param typeA_        The type of the first argument of
 *      the UDL operator : a.
 * @param call_         The function macro to be expanded
 *      with the variadic argument.
 *
 * @see EZL_MAKE_GEN_CPL_D
 */
#define EZL_MAKE_GEN_CPL(specifiers_, name_, typeA_, call_, ...) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)([[maybe_unused]] typeA_ a) { \
        call_(__VA_ARGS__) \
    }

/**
 * Creates an user-defined literal with the specifiers_, the
 * name_ (prefixed with an underscore) and body instructions
 * (body_, which is a direct preprocessor replacement).
 *
 * The argument of the UDL operator is a (of type typeA_).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param typeA_        The type of the first argument of
 *      the UDL operator : a.
 * @param body_         The macro constituting the body
 *      argument.
 *
 * @see EZL_MAKE_GEN_CPL
 */
#define EZL_MAKE_GEN_CPL_D(specifiers_, name_, typeA_, body_) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)([[maybe_unused]] typeA_ a) { \
       body_ \
    }

/**
 * Creates an user-defined literal with the specifiers_, the
 * name_ (prefixed with an underscore) and body instructions
 * (call_, which is expanded with the variadic arguments).
 *
 * The arguments of the UDL operator are a (of type typeA_)
 * and b (of type typeB_).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param typeA_        The type of the first argument of
 *      the UDL operator : a.
 * @param typeB_        The type of the second argument of
 *      the UDL operator : b.
 * @param call_         The function macro to be expanded
 *      with the variadic argument.
 *
 * @see EZL_MAKE_GEN_CPL2_D
 */
#define EZL_MAKE_GEN2_CPL(specifiers_, name_, typeA_, typeB_, call_, ...) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)([[maybe_unused]] typeA_ a, [[maybe_unused]] typeB_ b) { \
        call_(__VA_ARGS__) \
    }
/**
 * Creates an user-defined literal with the specifiers_, the
 * name_ (prefixed with an underscore) and body instructions
 * (body_, which is a direct preprocessor replacement).
 * This function macro use typeA_ and typeB_ as the arguments
 * of the user-defined literal operator.
 *
 * The arguments of the UDL operator are a (of type typeA_)
 * and b (of type typeB_).
 *
 * @param specifiers_   The specifiers of the UDL operator.
 * @param name_         The name of the literal suffix (an
 *      underscore prefix is added to the name).
 * @param typeA_        The type of the first argument of
 *      the UDL operator : a.
 * @param typeB_        The type of the second argument of
 *      the UDL operator : b.
 * @param body_         The macro constituting the body
 *      argument.
 *
 * @see EZL_MAKE_GEN2_CPL
 */
#define EZL_MAKE_GEN2_CPL_D(specifiers_, name_, typeA_, typeB_, body_) \
    specifiers_ auto operator "" \
    EZL_STRINGCAT(_, name_)([[maybe_unused]] typeA_ a, [[maybe_unused]] typeB_ b) { \
       body_ \
    }

#endif // EAZY_USERDEFINED_LITERALS_UTIL
