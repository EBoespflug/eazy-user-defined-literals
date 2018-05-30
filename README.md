# eazy-user-defined-literals

## Overview

EaZy user-defined Literals (EZL), is a proprocessor macro library providing tools to easily generate User-Defined Literals (UDL).

The library also provides (usable) examples of user-defined literals generation.

## Installation

This library is header-only. To use it, simply include needed header files in your source files.

The library is constituted in two main parts:
 - The EZL library: providing function macro to generate user-defined literals.
 - The EZL examples (situated in the src/examples subfolder): including an usage example of the EZL library. The header files thus provides user-defined literals for various domains (int literals, gmp literals, Qt string literals) and can be used in a project. Between, the inclusion of an example header file require the presence of the EZL library headers to compile. Please note that some examples  may require additionnal library (such as gmp for gmp_literals.hpp).

## Usage

### Quick start

The following code show the generation and the usage of an UDL "_str" in which the string literal is converted into ```std::string``` :

```c++
#include <iostream>
#include <string>

#include "../src/ezl.hpp"

EZL_MAKE(std::string, str)

#include "../src/ezl_undef.hpp"

int main()
{
    auto s = "my_string"_str;
    std::cout << s.size() << ": " << s << std::endl;
}```

Here, the macro ```EZL_MAKE(type_, name_)``` is an alias on ```EZL_MAKE_STR_I(type_, name_)```, which create an UDL with ```inline``` specifier.

```name_``` is prefixed with an underscore and the literal is cast in ```type_```. In the previous example, the function macro is expanded to :

```c++
inline auto operator "" _str([[maybe_unused]] const char* a, [[maybe_unused]] std::size_t b)
{
    return std::string(a);
}```

The header *ezl_undef.hpp* contains ```#undef``` directives for all EZL preprocessor tokens to avoir polluting code with macros and can be used after any EZL include. Please note that the ezl*_undef.hpp headers also contain ```#undef``` directives for the header guards.

### Regular macros

C++ offer 11 user-defined literal overload for each overloadable literal type. EZL covers each type and includes the type in the function name (due to the lack of macro overloading) :

 - Number literals :
    - EZL_MAKE_INT\* : Integer literals ```(unsigned long long)```.
    - EZL_MAKE_FLOAT\* : Floating-point literals ```(long double)```.
    - EZL_MAKE_RAW\* : Raw string literals (fallback for number literals) ```(const char*)```.
 - Character literals :
  - EZL_MAKE_CHAR : character literals ```(char)```.
  - EZL_MAKE_CHAR : character literals ```(char)```
  - EZL_MAKE_CHAR : character literals ```(char)```.
  - EZL_MAKE_CHAR : character literals ```(char)```.
 - String literals :
  - EZL_MAKE_STR\* : ```(const char*, std::size_t)```.
  - EZL_MAKE_WSTR\* : corresponding to ```(const char*, std::size_t)```.
  - EZL_MAKE_STR16\* : corresponding to ```(const char*, std::size_t)```.
  - EZL_MAKE_STR32\* : corresponding to ```(const char*, std::size_t)```.



### Core macros

## Contributors

 - Etienne BOESPFLUG [etienne.boespflug@gmail.com].

## Licence

[![CC0](https://licensebuttons.net/p/zero/1.0/88x31.png)](http://creativecommons.org/publicdomain/zero/1.0/)

This software has no license and is free to use.

## Disclaimer

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
