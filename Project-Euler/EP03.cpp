/*************************************************************************
    > File Name: 1.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月10日 星期五 18时45分30秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
#define max_n 600851475143

int main() {
	long long m = max_n, ans = 0, i = 2;
	while (i * i <= max_n) {
		if (!(m % i)) ans = i;
		while (!(m % i)) m /= i;
		i++;
	}
	if (m > 1) ans = m;
	cout << ans << endl;
	return 0;
}
