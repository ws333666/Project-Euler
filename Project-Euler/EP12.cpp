/*************************************************************************
    > File Name: EP12.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月04日 星期六 14时51分56秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000000

int prime[max_n + 5] = {0};
int f[max_n + 5] = {0};
int cnt[max_n + 5] = {0};

void init() {
	for (int i = 0; i <= max_n; i++) {
		if (!prime[i]) {
			prime[++prime[0]] = i;
			f[i] = 2;
		}
		for (int j = 1; j <= prime[0]; j++) {
		if (prime[j] * i > max_n) break;
		prime[prime[j] * i] = 1;
		if (i % prime[j] == 0) {
			f[i * prime[j]] = f[i] / (cnt[i] + 1) * (cnt[i] + 2);
			cnt[i * prime[j]] = cnt[i] + 1;
			break;
		} else {
			f[prime[j] * i] = f[prime[j]] * f[i];
			cnt[prime[j] * i] = 1; 
		}
	}
}
	return ;
}

int main() {
	init();
	int n = 1, fac = 0;
	while (fac < 500) {
		n += 1;
		if (n & 1) {
			fac = f[n] * f[(n + 1) >> 1];
		} else {
			fac = f[n >> 1] * f[n + 1];
		}
	}
	cout << n * (n + 1) / 2 << endl;
	return 0;
}

