#include<iostream>
#include<vector>
#include<string>
using namespace std;

string solution(vector<int>& price, vector<int>& zPrice, vector<int>& doorPrive, vector<int>& subPrice) {
	string ans;
	int n = price.size(), m = doorPrive.size();
	vector<int> zheCou(n), manJian(n), priceLeijia(n);
	zheCou[0] = zPrice[0];
	priceLeijia[0] = price[0];
	for (int i = 1; i < n; ++i) {
		zheCou[i] = zPrice[i] + zheCou[i - 1];
		priceLeijia[i] = price[i] + priceLeijia[i - 1];
	}
	for (int i = 0; i < n; ++i) {
		manJian[i] = priceLeijia[i];
		for (int j = m - 1; j >= 0; --j) {
			if (manJian[i] >= doorPrive[j]) {
				manJian[i] -= subPrice[j];
				break;
			}
		}
	}
	for (int i = 0; i < n; ++i) {
		ans += zheCou[i] > manJian[i] ? 'M' : zheCou[i] == manJian[i] ? 'B' : 'Z';
	}
	return ans;
}

int main()
{
	int n;
	cin >> n;
	vector<int> price(n), zPrice(n);
	for (int i = 0; i < n; ++i)
		cin >> price[i];
	for (int i = 0; i < n; ++i)
		cin >> zPrice[i];
	int m;
	cin >> m;
	vector<int> doorPrice(m), subPrice(m);
	for (int i = 0; i < m; ++i)
		cin >> doorPrice[i];
	for (int i = 0; i < m; ++i)
		cin >> subPrice[i];
	cout << solution(price, zPrice, doorPrice, subPrice) << endl;
	system("pause");
	return 0;
}