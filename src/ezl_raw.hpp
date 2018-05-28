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
#define EZL_MAKE_RAW_CPL(specifiers_, name_, call_, ...) \
    EZL_MAKE_GEN_CPL(specifiers_, name_, const char*, call_, __VA_ARGS__)

#define EZL_MAKE_RAW_CPL_D(specifiers_, name_, call_) \
    EZL_MAKE_GEN_CPL_D(specifiers_, name_, const char*, call_)

#define EZL_MAKE_RAW(specifiers_, type_, name_) EZL_MAKE_RAW_CPL_D(specifiers_, name_, return type_(a);)

#define EZL_MAKE_RAW_I(type_, name_) EZL_MAKE_RAW(inline, type_, name_)
#define EZL_MAKE_RAW_C(type_, name_) EZL_MAKE_RAW(constexpr, type_, name_)

#endif // EAZY_USERDEFINED_LITERALS_RAW
