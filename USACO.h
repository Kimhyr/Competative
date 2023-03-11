#pragma once

#include "Include.h"

namespace USACO {

struct Speeding_Ticket {};

}

// 75: * * * *
// 35: * * * * *
// 45: *
// 
// 76: * * * *
// 30: * *
// 40: * * * *

SOLUTION(USACO::Speeding_Ticket) {
	N max = 0;
	N n, m;
	std::cin >> n >> m;
	N l[n][2], b[m][2];
	N **c = (N **)l;
	for (N i = 0; i < n; ++i) {
		if (i == n)
			c = (N**)b, n =  m, i = 0;
		std::cin >> c[i][0] >> l[i][1];
	}

	return std::cout << max;
}
