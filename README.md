# sv

The NULL-terminated string is a very controversial design pattern in C. The
concept of the string view describes a pair of a pointer to a C-string and a
length. This can be used to split and reuse already owned C-strings without
modifying them (Unlike traditional C-string-splitting APIs like strtok(3)).
It is also very cheap to pass string views around, as they consist only of
two numbers (a length and a pointer).

This implementation of the string view concept is intended to be a lightweight
and well-documented single-header-file (STB-style) library. To get started
just:

```c
#define SV_IMPLEMENTATION 
#include "sv.h" 
```

The symbol SV_IMPLEMENTATION needs only be defined in one source file which
will then include the function implementations. In other files a simple
\#include is sufficient.

While passing a negative number as the unsigned type size_t is possible in C
(it gets converted to a very high number), this libary considers it undefined
behavior.

# Documentation

Install [doxygen](https://www.doxygen.nl/index.html).

```console
$ make doc
```

will generate PDF and HTML documentation in the doc folder.

# Examples

Some examples for usage are in the examples folder.

```console
$ make
```

to compile them.

# Licensing

This project is released under the MIT License.

The HTML documentation uses the [Doxygen Flat Theme](https://github.com/kcwongjoe/doxygen_theme_flat_design) 
by kcwongjoe which is also licensed under the MIT License.
