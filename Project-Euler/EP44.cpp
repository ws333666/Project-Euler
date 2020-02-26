/*************************************************************************
    > File Name: EP44.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月02日 星期四 16时14分59秒
 ************************************************************************/

#include <iostream>
#include <cinttypes>
using namespace std;

typedef long long int1;
int1 Pentagonal(int1 n) {
	return n * (3 * n - 1) / 2;
}

int1 binary_search(int1 (*func)(int1), int1 n, int1 x) {
	int1 head = 1, tail = n, mid;
	while (head <= tail) {
		mid = (head + tail) >> 1;
		if (func(mid) == x) return mid;
		else if (func(mid) < x) head = mid + 1;
		else tail = mid - 1;
	}
	return 0;
}

int main() {
	int1 n = 2, D = INT32_MAX, pk, pj;
	while (Pentagonal(n) - Pentagonal(n - 1) < D) {
		pk = Pentagonal(n);
		for (int j = n - 1; j >= 1; j--) {
			pj = Pentagonal(j);
			if (pk - pj >= D) break;
			int flag = 1;
			flag = binary_search(Pentagonal, 2 * n, pk + pj);
			flag = flag && binary_search(Pentagonal, n, pk - pj);
			if (flag) {
				D = pk - pj;
			}
		}
		n += 1;
	}
	cout << D << endl;
	return 0;
}
