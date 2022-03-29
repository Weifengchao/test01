//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//#include<set>
//using namespace std;
//
//static int getGcd(int m, int n) {
//	while (n > 0) {
//		int temp = m % n;
//		m = n;
//		n = temp;
//	}
//	return m;
//}
//
//int getLcm(int m, int n) {
//	int gcd = getGcd(m, n);
//	int res = m * n / gcd;
//	return res;
//}
//
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; ++i) {
//		int x;
//		cin >> x;
//		set<int> Set;
//		map<int, int> Map;
//		Set.insert(1);
//		Set.insert(x);
//		Map.insert(1, x);
//		int ans = 0;
//		for (int j = 2; j <= x / 2; ++j) {
//			if (x%j != 0 || Set.count(x / j)) {
//				continue;
//			}
//			Map.insert(j, x / j);
//			Set.insert(j);
//			Set.insert(x / j);
//		}
//		for (auto en : Map) {
//			int a = en.first;
//			int b = en.second;
//			if (getGcd(a, b) == 1 && getLcm(a, b) == x) {
//				++ans;
//			}
//		}
//		cout << ans;
//	}
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<int> Reverse(vector<int>& nums) {
//	vector<int> arr;
//	for (auto num : nums) {
//		int temp = 0;
//		while (num != 0) {
//			temp = temp * 10 + num % 10;
//			num = num / 10;
//		}
//		arr.emplace_back(temp);
//	}
//	return arr;
//}
//
//int main()
//{
//	int N, K;
//	cin >> N >> K;
//	vector<int> nums;
//	for (int i = 1; i <= K; ++i) {
//		int temp = i * N;
//		nums.emplace_back(temp);
//	}
//	nums =  Reverse(nums);
//	int ans = 0;
//	for (int i = 0; i < nums.size(); ++i)
//		ans = max(ans, nums[i]);
//	cout << ans;
//	system("pause");
//	return 0;
//}