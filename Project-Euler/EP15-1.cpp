/*************************************************************************
    > File Name: EP15-1.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月05日 星期日 20时37分12秒
 ************************************************************************/

#include<iostream>
using namespace std;
 
int main() {
	long long m = 40, n = 20, ans = 1;
	while (m || n) {
		if (m != 20) ans *= (m--);
		if (n != 0) ans /= (n--);
	}
	cout << ans << endl;
	return 0;
}
