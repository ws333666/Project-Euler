/*************************************************************************
    > File Name: EP13.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月04日 星期六 16时07分51秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;
 
char num[55];
int ans[55] = {0};

int main() {
	for (int i = 0; i < 100; i++) {
		cin >> num;
		int len = strlen(num);
		if (ans[0] < len) ans[0] = len;
		for (int i = 0; i < len; i++) {
			ans[len - i] += (num[i] - '0');
		}
	}
	for (int i = 1; i <= ans[0]; i++) {
		if (ans[i] < 10) continue;
		ans[i + 1] += ans[i] / 10;
		ans[i] %= 10;
		ans[0] += (i == ans[0]);
	}
	for (int i = ans[0]; i > ans[0] - 10; i--) {
		cout << ans[i];
	}
	cout << endl;
	return 0;
}
