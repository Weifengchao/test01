#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int n, m1, m2;
	cin >> n >> m1 >> m2;
	vector<int> fileCount1(n), fileCount2(n);
	vector<int> line1M1(m1), line2M1(m1);
	vector<int> line3M2(m2), line4M2(m2);
	for (int i = 0; i < m1; ++i)
		cin >> line1M1[i];
	for (int i = 0; i < m1; ++i)
		cin >> line2M1[i];
	for (int i = 0; i < m2; ++i)
		cin >> line3M2[i];
	for (int i = 0; i < m2; ++i)
		cin >> line4M2[i];

	for (int i = 0; i < m1; ++i) {
		for (int j = line1M1[i] - 1; j <= line2M1[i] - 1; ++j) {
				fileCount1[j] = 1;
		}
	}
	for (int i = 0; i < m2; ++i) {
		for (int j = line3M2[i] - 1; j <= line4M2[i] - 1; ++j) {
				fileCount2[j] = 1;
		}
	}
	int count = 0;
	for (int i = 0; i < n; ++i) {
		if (fileCount1[i] == 1 && fileCount2[i] == 1)
			++count;
	}
	cout << count << endl;
	system("pause");
	return 0;
}