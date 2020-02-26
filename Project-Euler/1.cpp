/*************************************************************************
    > File Name: 1.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月11日 星期六 09时37分14秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
#define max_n 1000
char num[max_n + 5];

int main() {
	int len = 0;
	while (~scanf("%s", num + len)) len += strlen(num + len);
	long long p = 1, ans = 0, zero = 0;
	for (int i = 0; num[i]; i++) {
		num[i] -= '0';
		if (num[i]) p *= num[i];
		else zero++;
		if (i < 13) continue;
		if (num[i -13]) p /= num[i -13];
		else zero--;
		if (zero == 0 && ans < p) ans = p;
	}
	cout << ans << endl;
	return 0;
}
