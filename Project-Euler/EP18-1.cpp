/*************************************************************************
    > File Name: EP18-1.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月05日 星期日 21时07分34秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 20 

int val[max_n][max_n] = {0};
int keep[max_n][max_n] = {0};

int dfs(int i, int j, int n) {
	if (i + 1 == n) return val[i][j];
	if (keep[i][j]) return keep[i][j];
	int val1 = dfs(i + 1, j, n);
	int val2 = dfs(i + 1, j + 1, n);
	return keep[i][j] = (val1 > val2 ? val1 : val2) + val[i][j];
}


int main() {
	for (int i = 0; i < max_n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> val[i][j];
		}
	}
	cout << dfs(0, 0, max_n) << endl;
	return 0;
}
