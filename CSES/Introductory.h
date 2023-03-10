#pragma once

#include "CSES.h"

SOLUTION(CSES::Weird_Algorithm) {
	N i;
	std::cin >> i;
	std::cout << i;
	while (1 != (i = (i & 1) ? i * 3 + 1 : i / 2))
		std::cout << ' ' << i;
	return std::cout << '\n';
}

SOLUTION(CSES::Missing_Number) {
	N l;
	std::cin >> l;
	l *= 3;
	N nums[l];
	for (N i = 0; i < l - 1; ++i) {
		std::cin >> nums[i];
		 l -= nums[i];
	}
	return std::cout << l << '\n';
}

SOLUTION(CSES::Repetitions) {
	std::string dna;
	std::cin >> dna;
	N l = 0;
	S s = dna[0];
	for (N i = 1; i < dna.length(); ++i) {
		N l2 = 1;
		for (;;) {
			if (s != dna[i])
				break;
			++l2, ++i;
		}
		s = dna[i];
		if (l2 > l)
			l = l2;
	}
	return std::cout << l << '\n';
}

SOLUTION(CSES::Stick_Lengths) {
	N c, x = 0;
	std::cin >> c;
	N arr[c];
	N m = 0, i = 0;
	for (; i < c; ++i) {
		std::cin >> arr[i];
		m += arr[i];
	}
	m = round(static_cast<R64>(m) / c);
	for (N const& i : arr) {
		if (i > m)
			x += i - m;
		else if (i < m)
			x += m - i;
	}
	return std::cout << x;
}
