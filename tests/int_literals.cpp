#include "../src/examples/int_literals.hpp"


#include <cstdint>



int main()
{
    using namespace ezl::int_literals;

    [[maybe_unused]] auto s   = 0_s;     // short
    [[maybe_unused]] auto us  = 0_us;    // unsigned short.

    [[maybe_unused]] auto i1  = 0_i8;    // std::int8_t
    [[maybe_unused]] auto i2  = 0_i16;   // std::int16_t
    [[maybe_unused]] auto i3  = 0_i32;   // std::int32_t
    [[maybe_unused]] auto i4  = 0_i64;   // std::int64_t

    [[maybe_unused]] auto i5  = 0_if8;   // std::int_fast8_t
    [[maybe_unused]] auto i6  = 0_if16;  // std::int_fast16_t
    [[maybe_unused]] auto i7  = 0_if32;  // std::int_fast32_t
    [[maybe_unused]] auto i8  = 0_if64;  // std::int_fast64_t

    [[maybe_unused]] auto i9  = 0_il8;   // std::int8_t
    [[maybe_unused]] auto i10 = 0_il16;  // std::int16_t
    [[maybe_unused]] auto i11 = 0_il32;  // std::int32_t
    [[maybe_unused]] auto i12 = 0_il64;  // std::int64_t

    [[maybe_unused]] auto i13 = 0_iptr;  // std::intptr_t
    [[maybe_unused]] auto i14 = 0_imax;  // std::intmax_t

    [[maybe_unused]] auto u1  = 2_u8;    // std::uint8_t
    [[maybe_unused]] auto u2  = 2_u16;   // std::uint16_t
    [[maybe_unused]] auto u3  = 2_u32;   // std::uint32_t
    [[maybe_unused]] auto u4  = 2_u64;   // std::uint64_t

    [[maybe_unused]] auto u5  = 0_uf8;   // std::uint_fast8_t
    [[maybe_unused]] auto u6  = 0_uf16;  // std::uint_fast16_t
    [[maybe_unused]] auto u7  = 0_uf32;  // std::uint_fast32_t
    [[maybe_unused]] auto u8  = 0_uf64;  // std::uint_fast64_t

    [[maybe_unused]] auto u9  = 0_ul8;   // std::uint_least8_t
    [[maybe_unused]] auto u10 = 0_ul16;  // std::uint_least16_t
    [[maybe_unused]] auto u11 = 0_ul32;  // std::uint_least32_t
    [[maybe_unused]] auto u12 = 0_ul64;  // std::uint_least64_t

    [[maybe_unused]] auto u13 = 0_uptr;  // std::uintptr_t
    [[maybe_unused]] auto u14 = 0_umax;  // std::uintmax_t*/
}
