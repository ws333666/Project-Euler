/*************************************************************************
    > File Name: EP01.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月18日 星期三 15时10分42秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int sum1 = (3 + 999) * 333 / 2;
	int sum2 = (5 + 995) * (995 / 5) / 2;
	int sum3 = (15 + (995 / 15) * 15) * (995 / 15) / 2;
	printf("%d\n", sum1 + sum2 - sum3);
	return 0;
}