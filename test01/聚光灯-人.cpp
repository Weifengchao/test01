#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int arr[n][m] = {0};
	int row[n] = { 0 };
	int col[m] = { 0 };
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> arr[i][j];
			if (arr[i][j] == 1 && !row[i] || !col[j])
				row[i] = 1, col[j] = 1;
		}
	}
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (arr[i][j] == 0)
				ans += row[i] + col[j];
		}
	}
	cout << ans << endl;
	system("pause");
	return 0;
}