#pragma once

#include <bits/stdc++.h>

using V = void;
using B = bool;

using S = char;

using I8 = signed char;
using I16 = signed short int;
using I32 = signed int;
using I64 = signed long int;

using N8 = unsigned char;
using N16 = unsigned short int;
using N32 = unsigned int;
using N64 = unsigned long int;

using R32 = float;
using R64 = double;

using S = char;

#if defined(__x86_64__)
using I = I64;
using N = N64;
using R = R64;
#else
using I = I32;
using N = N32;
using R = R32;
#endif

template<typename Solution_T>
std::ostream& solve();

#define SOLUTION(NAME) template<> inline std::ostream& solve<NAME>()
