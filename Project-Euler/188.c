/*************************************************************************
    > File Name: 188.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月19日 星期四 19时14分25秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#define max_n 1e-6

int64_t prime[max_n + 5] = {0};

int64_t init() {
	for (int i = 2; i <= max_n; i++) {
		if (!prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= max_n; j++) {
			if (prime[j] * i > max_n) break;
			prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) break;
		}
	}
	return ;
}


int main() {
	int64_t n, m;
	scanf("%" PRId64 "%" PRId64, &n, &m);
	init();
	for (int i = 1; prime[0]; i++) {
		if (prime[i] >= m && prime[i] <= n) {
			printf("%" PRId64 "\n", prime[i]);
		}
	}
	return 0;
}
