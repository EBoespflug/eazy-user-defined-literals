#include "../src/examples/gmp_literals.hpp"

#include <gmpxx.h>
#include <initializer_list>
#include <iostream>

int main()
{
    using namespace ezl::gmp_literals::mpz;

    auto v = {
        "00110010100010110101010101"_mpz2,
        "02221012110221102001012121"_mpz3,
        "ffa02bf24eaf261fa7d544938c"_mpz16,
        "ya7ipv03ge81bz3uf4oiwu9j4i"_mpz36,
        "ZyM6Tt6nW0oN8AnbUBLMIsGeP6"_mpz62
    };

    for(auto& z : v)
        std::cout << z << '\n';
}
