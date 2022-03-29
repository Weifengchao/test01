#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstdio>
using namespace std;
const int LEN = 100000;
int N, Q;
int dp[LEN];
string s = "";
queue<string> q;

int get3Num(string s) {
	int ans = 0;
	for (int i = 0; i < N; ++i)
		ans = ans * 3 + s[i] - 'A';
		return ans;
}

void build(string s, int cur, bool stat) {
	if (cur == N) {
		if (stat) {
			dp[get3Num(s)] = 0;
			q.push(s);
		}
		return;
	}
	int len = s.size();
	for (int i = 0; i < 3; ++i) {
		if (cur > len - 1) 
			s += char('A' + i);
		else s[cur] = char('A' + i);
		build(s, cur + 1, stat && (cur == 0 || s[cur - 1] <= s[cur]));
	}
}

void bfs() {
	while (!q.empty()) {
		string temp = q.front();
		q.pop();
		int cur = get3Num(temp);
		for (int i = 1; i <= N; ++i) {
			s = temp;
			reverse(s.begin(), s.begin() + 1);
			int next = get3Num(s);
			if (dp[next] > dp[cur] + 1) {
				dp[next] = dp[cur] + 1;
				q.push(s);
			}
		}
	}
}
int main()
{
	cin >> N >> Q;
	memset(dp, 0x3f, sizeof(dp));
	build(s, 0, true);
	bfs();
	string str;
	while (Q--) {
		cin >> str;
		cout << dp[get3Num(str)];
	}
	return 0;
}