/*************************************************************************
    > File Name: EP06.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月18日 星期三 15时47分19秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int sum1 = (1 + 100) * 100 / 2;
	int sum2 = (2 * 100 * 100 * 100 + 3 * 100 * 100 + 100) / 6;
	printf("%d\n", sum1 * sum1 - sum2);
	return 0;
}