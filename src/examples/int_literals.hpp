#ifndef EZL_INT_LITERALS
#define EZL_INT_LITERALS

#include "../ezl.hpp"
#include <cstdint>

namespace ezl::int_literals {
    EZL_MAKE_INT_C(short, s)
    EZL_MAKE_INT_C((unsigned short), us)

    EZL_MAKE_INT_C(int8_t, i8)
    EZL_MAKE_INT_C(int16_t, i16)
    EZL_MAKE_INT_C(int32_t, i32)
    EZL_MAKE_INT_C(int64_t, i64)

    EZL_MAKE_INT_C(int_fast8_t, if8)
    EZL_MAKE_INT_C(int_fast16_t, if16)
    EZL_MAKE_INT_C(int_fast32_t, if32)
    EZL_MAKE_INT_C(int_fast64_t, if64)

    EZL_MAKE_INT_C(int_least8_t, il8)
    EZL_MAKE_INT_C(int_least16_t, il16)
    EZL_MAKE_INT_C(int_least32_t, il32)
    EZL_MAKE_INT_C(int_least64_t, il64)

    EZL_MAKE_INT_C(intptr_t, iptr)
    EZL_MAKE_INT_C(intmax_t, imax)

    EZL_MAKE_INT_C(uint8_t, u8)
    EZL_MAKE_INT_C(uint16_t, u16)
    EZL_MAKE_INT_C(uint32_t, u32)
    EZL_MAKE_INT_C(uint64_t, u64)

    EZL_MAKE_INT_C(uint_fast8_t, uf8)
    EZL_MAKE_INT_C(uint_fast16_t, uf16)
    EZL_MAKE_INT_C(uint_fast32_t, uf32)
    EZL_MAKE_INT_C(uint_fast64_t, uf64)

    EZL_MAKE_INT_C(uint_least8_t, ul8)
    EZL_MAKE_INT_C(uint_least16_t, ul16)
    EZL_MAKE_INT_C(uint_least32_t, ul32)
    EZL_MAKE_INT_C(uint_least64_t, ul64)

    EZL_MAKE_INT_C(uintptr_t, uptr)
    EZL_MAKE_INT_C(uintmax_t, umax)
}

#include "../ezl_undef.hpp"

#endif // EZL_INT_LITERALS
