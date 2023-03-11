#pragma once

#include "CSES.h"

SOLUTION(CSES::Stick_Lengths) {
	N c, x = 0;
	std::cin >> c;
	N arr[c];
	N m = 0, i = 0;
	for (; i < c; ++i) {
		std::cin >> arr[i];
		m += arr[i];
	}
	m = round((R64)m / c);
	for (N i : arr) {
		if (i > m)
			x += i - m;
		else if (i < m)
			x += m - i;
	}
	return std::cout << x;
}
