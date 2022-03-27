#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:


		int maxProfit(vector<int>& nums) {
			int ans;
			int Min = nums[0], Max = 0;
			for (int i = 0; i < nums.size(); ++i) {
				Max = max(nums[i] - Min, Max);
				Min = min(Min, nums[i]);
			}
			return Max > 0 ? Max : 0;
		}
};


int main() {
	vector<int> v({7,2,7,4,3});  //{7, 1, 5, 3, 6, 4}
	Solution s;
	int ans = s.maxProfit(v);
	/*for (int i = 0; i < ans.size(); ++i) {
		for (int j = 0; j < ans[i].size(); ++j) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}*/
	cout << ans << endl;
	system("pause");
	return 0;
}