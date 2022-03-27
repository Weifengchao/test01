#include<iostream>
#include<string>
#include<vector>
using namespace std;

string dfs(string s) {
	int len = s.size();
	if (len == 0)
		return "";
	else if (len == 1)
		return s;
	else {
		string ss;
		ss += s[(len + 1) / 2 - 1];
		s.erase((len + 1) / 2 - 1, 1);
		ss += dfs(s);
		return ss;
	}
}
int main()
{
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	if (t == 1)
		cout << dfs(s);
	else {
		int idx = 0;
		vector<int> nums;
		vector<bool> vis(n);
		for (int i = n; -> 0; --i) {
			int nowIdx = (i  +   )
		}
	}
	system("pause");
	return 0;
}