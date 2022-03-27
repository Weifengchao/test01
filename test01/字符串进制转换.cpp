#include<iostream>
#include<string>
using namespace std;

int main()
{
	string hexStr;
	cin >> hexStr;
	int arr[16] = { 0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4 };
	int ans = 0;
	hexStr = hexStr.substr(2);
	for (auto ch : hexStr) {
		if (ch >= '0' && ch <= '9')
			ans += arr[ch - '0'];
		else if (ch >= 'a' && ch <= 'z')
			ans += arr[ch - 'a' + 10];
	}
	cout << ans << endl;
	system("pause");
	return 0;
}