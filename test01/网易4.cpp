#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> nums(n + 1, vector<int>(m + 1, 0));
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j)
			cin >> nums[i][j];
	}
	vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
	for (int j = 2; j <= m; ++j) {
		if (nums[1][j] != nums[1][j - 1]) {
			dp[1][j] = dp[1][j - 1] + 2;
		}
		else {
			dp[1][j] = dp[1][j - 1] + 1;
		}
	}
	for (int i = 2; i <= n; ++i) {
		if (nums[i][1] != nums[i - 1][1]) {
			dp[i][1] = dp[i - 1][1] + 2;
		}
		else {
			dp[i][1] = dp[i - 1][1] + 1;
		}
	}
	for (int i = 2; i <= n; ++i) {
		for (int j = 2; j <= m; ++j) {
			int left = nums[i][j] != nums[i][j - 1] ? dp[i][j - 1] + 2 : dp[i][j - 1] + 1;
			int up = nums[i][j] != nums[i - 1][j] ? dp[i - 1][j] + 2 : dp[i - 1][j] + 1;
			dp[i][j] = min(left, up);
		}
	}
	cout << dp[n][m];
	system("pause");
	return 0;
}