#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	int a, b, x, y;
	while (cin >> a) {
		cin >> b >> x >> y;
		if (y >= x) {
			int Max = max(a, b);
			int ans = Max % y == 0 ? Max / y : (Max / y) + 1;
			cout << ans;
		}
		int y2 = y * 2;
		if (y2 >= x) {
			int Min = min(a, b);
			int cnt = Min / y;
			if (Min / y == 1) ++cnt;
			int t = max(a - (cnt*y), b - (cnt*y));
			cnt += t % x == 0 ? t / x : (t / x) + 1;
			cout << cnt;
		}
		else {
			int cnt = 0;
			while (a >= x) a -= x,++cnt;
			while (b >= x) b -= x, ++cnt;
			int Max = max(a, b);
			cnt += Max <= y ? 1 : 2;
			cout << cnt;
		}
	}
	//int len = max(x, y);
	//int num = 0;
	//int sum = a + b;
	//if (sum%len != 0) {
	//	num = (int)sum / len + 1;
	//}
	//else {
	//	num = sum / len;
	//}
	return 0;
}