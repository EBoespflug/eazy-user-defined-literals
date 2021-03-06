/**
 * gmp_literals.hpp
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

#ifndef EZL_GMP_LITERALS
#define EZL_GMP_LITERALS

#include "../ezl.hpp"

#include <gmpxx.h>

/* Macro callback. */
#define CALL(base_) return mpz_class{a, base_}; \

#define CREATE(base_) EZL_MAKE_STR_CPL(inline, EZL_STRINGCAT(mpz, base_), CALL, base_)

namespace ezl::gmp_literals {
    inline namespace mpz {
        // note : should we use boost PP for ? implement custom macro loops ?
        CREATE(2)
        CREATE(3)
        CREATE(4)
        CREATE(5)
        CREATE(6)
        CREATE(7)
        CREATE(8)
        CREATE(9)
        CREATE(10)
        CREATE(11)
        CREATE(12)
        CREATE(13)
        CREATE(14)
        CREATE(15)
        CREATE(16)
        CREATE(17)
        CREATE(18)
        CREATE(19)
        CREATE(20)
        CREATE(21)
        CREATE(22)
        CREATE(23)
        CREATE(24)
        CREATE(25)
        CREATE(26)
        CREATE(27)
        CREATE(28)
        CREATE(29)
        CREATE(30)
        CREATE(31)
        CREATE(32)
        CREATE(33)
        CREATE(34)
        CREATE(35)
        CREATE(36)
        CREATE(37)
        CREATE(38)
        CREATE(39)
        CREATE(40)
        CREATE(41)
        CREATE(42)
        CREATE(43)
        CREATE(44)
        CREATE(45)
        CREATE(46)
        CREATE(47)
        CREATE(48)
        CREATE(49)
        CREATE(50)
        CREATE(51)
        CREATE(52)
        CREATE(53)
        CREATE(54)
        CREATE(55)
        CREATE(56)
        CREATE(57)
        CREATE(58)
        CREATE(59)
        CREATE(60)
        CREATE(61)
        CREATE(62)
    }
}

#undef CREATE

#include "../ezl_undef.hpp"

#endif // EZL_GMP_LITERALS
