# eazy-user-defined-literals

## Overview

EaZy user-defined Literals (EZL), is a preprocessor macro library providing tools to easily generate User-Defined Literals (UDL).

The library also provides (usable) examples of user-defined literals generation.

## Installation

This library is header-only. To use it, simply include needed header files in your source files.

The library is constituted in two main parts:
 - The EZL library: providing function macro to generate user-defined literals.
 - The EZL examples (situated in the src/examples subfolder): including an usage example of the EZL library. The header files thus provides user-defined literals for various domains (int literals, gmp literals, Qt string literals) and can be used in a project. Between, the inclusion of an example header file require the presence of the EZL library headers to compile. Please note that some examples  may require additionnal library (such as GMP for gmp_literals.hpp).

## Usage

### Quick start

The following code show the generation and the usage of an UDL "_str" in which the string literal is converted into ```std::string``` :

```c++
#include <iostream>
#include <string>

#include "ezl/ezl.hpp"

EZL_MAKE(std::string, str)

#include "ezl/ezl_undef.hpp"

int main()
{
    auto s = "my_string"_str;
    std::cout << s.size() << ": " << s << std::endl;
}
```

Here, the macro ```EZL_MAKE(type_, name_)``` is an alias on ```EZL_MAKE_STR_I(type_, name_)```, which create an UDL with ```inline``` specifier.

```name_``` is prefixed with an underscore and the literal is casted in ```type_```. In the previous example, the function macro is expanded to :

```c++
inline auto operator "" _str([[maybe_unused]] const char* a, [[maybe_unused]] std::size_t b)
{
    return std::string(a);
}
```

The header *ezl_undef.hpp* contains ```#undef``` directives for all EZL preprocessor tokens to avoir polluting code with macros and can be used after any EZL include. *Please note that the ezl\*_undef.hpp headers also contain ```#undef``` directives for the header guards*.

### Regular macros

#### The literal types

C++ offer 11 user-defined literal overloads for each overloadable literal type. EZL covers each type and includes the type in the function name (due to the lack of typing and overloading in macros) :

 - Number literals :
    - EZL_MAKE_INT\* ```(unsigned long long)```: Integer literals.
    - EZL_MAKE_FLOAT\* ```(long double)```: Floating-point literals.
    - EZL_MAKE_RAW\* ```(const char*)```: Raw string literals (fallback for number literals).
 - Character literals :
    - EZL_MAKE_CHAR\* ```(char)```: character literals.
    - EZL_MAKE_WCHAR\* ```(wchar_t)```: wide-character literals.
    - EZL_MAKE_CHAR16\* ```(char16_t)```: char16_t character literals.
    - EZL_MAKE_CHAR32\* ```(char32_t)```: char32_t character literals.
 - String literals :
    - EZL_MAKE_STR\* ```(const char*, std::size_t)```: string literal.
    - EZL_MAKE_WSTR\* ```(const wchar_t*, std::size_t)```: wide-string literal.
    - EZL_MAKE_STR16\*```(const char16_t*, std::size_t)```: char16_t string literal.
    - EZL_MAKE_STR32\*  ```(const char32_t*, std::size_t)```: char32_t string literal.

For each ```TYPE``` of those 11 types, 5 function macros are provided, described in the next sections.

#### Basic conversion UDLs macros

```EZL_MAKE_TYPE(specifiers_, type_, name_)``` generates an UDL which convert the literal value to the specified ```type_```, using a function C-style cast. ```name_``` is prepended with an underscore ```_```.

The ```specifier_``` corresponds to the different UDL specifier allowed : ```inline```, ```constexpr```. Ending the specifiers list with ```const``` will make the return value ```const```.

Here is an example of expansion of the macro ```EZL_MAKE_CHAR32(constexpr, myChar32String, s32)``` (with indentation added for readability concerns):

```c++
constexpr auto operator "" _s32([[maybe_unused]] char32_t a)
{
    myChar32String{a};
}
```

In addition, two helper function macros are provided :
 - ```EZL_MAKE_TYPE_I``` which expands to ```EZL_MAKE_TYPE``` with ```inline``` specifier.
 - ```EZL_MAKE_TYPE_C``` which expands to ```EZL_MAKE_TYPE``` with ```constexpr``` specifier.

#### Body replacement macros

For more complexes UDL, EZL provides the ```EZL_MAKE_TYPE_CPL(specifiers_, name_, call_, ...)``` function macro. As for ```EZL_MAKE_TYPE```, ```specifiers_``` correspond to the UDL function specifiers and ```name_``` to the name of the UDL (with an extra leading ```_``` added).

```call_``` is an argument function macro which will be expanded with the variadic argument of the macro in place of the UDL body.

Here is a sample of an UDL reversing the string literal and returning the constructed ```std::string``` appended with " !" :

```c++
#include "../src/ezl.hpp"

#include <iostream>
#include <string>
#include <algorithm>

#define REVERSE_STRING(suffix_) \
    std::string s{ a }; \
    std::reverse(std::begin(s), std::end(s)); \
    return s + suffix_; \

EZL_MAKE_STR_CPL(inline, rev, REVERSE_STRING, " !")

int main()
{
    auto s = "emocleW"_rev;
    std::cout << s << std::endl;
}
```

Print : ```Welcome !```.

In the previous example, the macro ```REVERSE_STRING``` is passed as the ```call_``` argument of the ```EZL_MAKE_STR_CPL``` macro. The variadic arguments contains only the appended string " !" and this argument is forwarded to the ```call_``` macro inside the body of the UDL.

The expansion of the call of the function macro with indentation added is :

```c++
inline auto operator "" _rev([[maybe_unused]] const char* a, [[maybe_unused]] std::size_t b)
{
    std::string s{ a };
    std::reverse(std::begin(s), std::end(s));
    return s + " !";
}
```

As you can see, the UDL argument (here ```const char*``` and ```std::size_t```) are nammed respectively ```a``` and ```b``` in case of two-arguments UDL (only one argument ```a``` for single-argument UDL). The ```call_``` macro can use thoses arguments for the UDL body.

The function macro```EZL_MAKE_TYPE_CPL``` require the ```call_``` argument to be a function macro (i.e. that can be expanded though a call). ```EZL_MAKE_TYPE_CPL_D(specifiers_, name_, body_)``` use the same scheme but ```body_``` is simply a macro wich is replaced in place of the UDL body :

```c++
#include "../src/ezl.hpp"
#include <iostream>
#include <random>

EZL_MAKE_INT_CPL_D(inline, rand, \
    static std::random_device rd; \
    static std::mt19937 gen(rd()); \
    std::uniform_int_distribution<> dist(0, a);

    return dist(gen);
)

int main()
{
    for(auto i{ 0u }; i < 10; ++i)
        std::cout << 25_rand << ' ';
}
```

Possible output : ```17 20 3 8 21 24 17 20 22 21```.

Use ```EZL_MAKE_TYPE_CPL``` to generate several UDLs following the same template (as in the [GMP literals example](src/examples/gmp_literals.hpp)) and ```EZL_MAKE_TYPE_CPL_D``` when you don't need to specify any argument and want to avoid creating a macro only for the ```call_``` argument.

### Utility macros

All type specific macros are generated from the four ```EZL_MAKE_GEN*``` function macros that should not have many usage from user code, but can still be used.

```EZL_STRINGCAT``` and ```EZL_JOIN``` are utility macros for preprocessor tokens concatenation, which can be used to generate UDL names (as in the [GMP literals example](src/examples/gmp_literals.hpp)).    

## Contributors

 - Etienne BOESPFLUG [etienne.boespflug@gmail.com].

## Licence

[![CC0](https://licensebuttons.net/p/zero/1.0/88x31.png)](http://creativecommons.org/publicdomain/zero/1.0/)

This software has no license and is free to use.

## Disclaimer

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
