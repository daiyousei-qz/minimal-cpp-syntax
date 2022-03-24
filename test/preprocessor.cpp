// pragma
#pragma once
#pragma \
    once

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