// pragma
#pragma once
#pragma \
    once

_Pragma("")

#pragma region

#pragma endregion

// include
#include <vector>
#include "string.h"
#include <c\
stdio>
#include                 <iostream>

// line
#line 41
#line 42 \
    "filename"

// diagonistic
#warning message unquoted
#warning "message quoted"
#error \
    "message next line"

// macro
#define TEST(X) X::Y()
#define FOO
#define BAR(A, B) A + B
#define BUZ(A, B, C) \
    A + \
    B + \
    C + 1
#define STR "hello" " world"

#undef BAR
#undef \
BUZ

// conditional
#if defined(FOO) && __has_include(<vector>) \
    && __has_cpp_attribute(noreturn)
    
    #ifndef \
                BUZ
    #endif
#elif defined BAR
#elifdef FOO
#elifndef FOO
#else
#endif

#   define HELLO(X) 1
#if /*comment*/ HELLO(int)

#endif // comment

#if __has_include(<ve\
ctor>) && __has_cpp_attribute(noreturn)

#endif