#ifndef EZL_INT_LITERALS
#define EZL_INT_LITERALS

#include "../ezl.hpp"
#include <cstdint>

namespace ezl::int_literals {
    EZL_MAKE_INT_C(short, s)
    EZL_MAKE_INT_C(unsigned short, us)

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

    EZL_MAKE_INT_C(uint8_t, ui8)
    EZL_MAKE_INT_C(uint16_t, ui16)
    EZL_MAKE_INT_C(uint32_t, ui32)
    EZL_MAKE_INT_C(uint64_t, ui64)

    EZL_MAKE_INT_C(uint_fast8_t, uif8)
    EZL_MAKE_INT_C(uint_fast16_t, uif16)
    EZL_MAKE_INT_C(uint_fast32_t, uif32)
    EZL_MAKE_INT_C(uint_fast64_t, uif64)

    EZL_MAKE_INT_C(uint_least8_t, uil8)
    EZL_MAKE_INT_C(uint_least16_t, uil16)
    EZL_MAKE_INT_C(uint_least32_t, uil32)
    EZL_MAKE_INT_C(uint_least64_t, uil64)

    EZL_MAKE_INT_C(uintptr_t, uiptr)
    EZL_MAKE_INT_C(uintmax_t, uimax)
}

#include "../ezl_undef.hpp"

#endif // EZL_INT_LITERALS
