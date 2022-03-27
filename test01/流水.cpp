#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
//zhushi

int main()
{
	int n;
	cin >> n;
	vector<int> high(n);
	for (int i = 0; i < n; ++i)
		cin >> high[i];
	int ans = 0;
	vector<int> left(n);
	left[0] = 1;
	for (int i = 1; i < n; ++i) {
		if (high[i] > high[i - 1])
			left[i] = left[i - 1] + 1;
		else
			left[i] = 1;
	}
	vector<int> right(n);
	right[n - 1] = 1;
	for (int i = n - 2; i >= 0; --i) {
		if (high[i] > high[i + 1])
			right[i] = right[i + 1] + 1;
		else
			right[i] = 1;
	}
	for (int i = 0; i < n; ++i)
		ans = max(ans, left[i] + right[i] - 1);
	cout << ans << endl;
	system("pause");
	return 0;
}