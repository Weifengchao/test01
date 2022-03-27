#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	int len = max(x, y);
	int num = 0;
	int sum = a + b;
	if (sum%len != 0) {
		num = (int)sum / len + 1;
	}
	else {
		num = sum / len;
	}
	cout << num;
	return 0;
}