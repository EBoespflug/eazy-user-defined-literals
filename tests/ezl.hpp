// preprocessor only.
#include "../src/ezl.hpp"

// STR
EZL_MAKE_STR(constexpr, Foo, gato)
EZL_MAKE(nullptr_t, null)

// INT

EZL_MAKE_INT(constexpr, Integer, int)
EZL_MAKE_INT_I(nullptr_t, int)


#include "../src/ezl_undef.hpp"
