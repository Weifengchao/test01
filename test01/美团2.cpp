#include<iostream>
#include<vector>
using namespace std;

void coals(int n, int k1, int k2, vector<int> nums) {
	int max = 1 << nums.size();
	int ansNum = 0, ansMax = 0;
	for (int i = 0; i < max; ++i) {
		vector<int> temp;
		int num = i;
		int count = 0;
		while (num > 0) {
			if ((num & 1) == 1)
				temp.emplace_back(nums[count]);
			++count;
			num = num >> 1;
		}
		int tempSum = 0;
		for (int j = 0; j < temp.size(); ++j)
			tempSum += temp[j];
		if (tempSum % k1 == 0 && tempSum % k2 != 0) {
			if (tempSum > ansMax) {
				ansMax = tempSum;
				ansNum = 0;
			}
			if (tempSum == ansMax)
				ansNum++;
		}
	}
	cout << ansMax << " " << ansNum << endl;
}
int main()
{
	int n, k1, k2;
	cin >> n >> k1 >> k2;
	vector<int> nums(n);
	for (int i = 0; i < n; ++i) {
		cin >> nums[i];
	}
	coals(n, k1, k2, nums);
	system("pause");
	return 0;
}