#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int ans = 0;
	int left = 0;
  	for (int i = 1; i < s.size(); ++i) {
		left = i;
		while (i < s.size() && s[i] == s[i - 1] || s[i] == s[i - 1] + 1) {
			++i;
		}
		if (left != i) {
			--i;
			if ((left - i) % 2 == 0) {
				for (; left <= i; left += 2) {
					ans += s[left] - 'a' + 1 + s[left - 1] - 'a' + 1;
				}
			}
			else {
				for (left++; left <= i; left += 2) {
					ans += s[left] - 'a' + 1 + s[left - 1] - 'a' + 1;
				}
			}
		}
	}
	cout << ans;
	system("pause");
	return 0;
}