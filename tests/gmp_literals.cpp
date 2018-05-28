/**
 * gmp_literals.cpp
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

#include "../src/examples/gmp_literals.hpp"

#include <gmpxx.h>
#include <initializer_list>
#include <iostream>

int main()
{
    using namespace ezl::gmp_literals::mpz;

    mpz_class m = "0010101"_mpz2;

    /*auto v = {
        "00110010100010110101010101"_mpz2,
        "02221012110221102001012121"_mpz3,
        "ffa02bf24eaf261fa7d544938c"_mpz16,
        "ya7ipv03ge81bz3uf4oiwu9j4i"_mpz36,
        "ZyM6Tt6nW0oN8AnbUBLMIsGeP6"_mpz62
    };

    for(auto& z : v)
        std::cout << z << '\n';*/
}
