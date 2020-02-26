/*************************************************************************
    > File Name: EP19.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月11日 星期六 10时46分13秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <cinttypes>
using namespace std;

int32_t whichday(int32_t y, int32_t m, int32_t d) {
	if (m == 1 || m == 2) {
		--y; m += 12;
	}
	int32_t w;
	w = (d + 2 * m + 3 * (m  + 1) / 5 + y + y / 4 
		 - y / 100 + y / 400) % 7;
	return w;
}
	
int main() {
	int32_t Saturday = 0;
	for (int32_t y = 1901; y < 2001; ++y) {
		for (int32_t m = 1; m <= 12; ++m) {
			if (whichday(y, m, 1) == 5) Saturday++;
		}
	}
	cout << Saturday << endl;
	return 0;
}
