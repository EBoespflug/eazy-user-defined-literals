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
#include "../src/ezl.hpp"

#include <iostream>
#include <string>

EZL_MAKE(std::string, str)

int main()
{
    auto s = "my_string"_str;
    std::cout << s.size() << ": " << s << std::endl;
}
```

Here, the macro ```EZL_MAKE(type_, name_)``` is an alias on ```EZL_MAKE_STR_I(type_, name_)```, which create an UDL with ```inline``` specifier.

```name_``` is prefixed with an underscore and the literal is cast in ```type_```.

### Core macros

## Contributors

 - Etienne BOESPFLUG [etienne.boespflug@gmail.com].

## Licence

[![CC0](https://licensebuttons.net/p/zero/1.0/88x31.png)](http://creativecommons.org/publicdomain/zero/1.0/)

This software has no license and is free to use.

## Disclaimer

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
