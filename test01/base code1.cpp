#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string str1;
	cin >> str1;
	str1 = str1.substr(2, str1.size() - 2);
	int d = stoi(str1, 0, 16);
	cout << d << endl;
	vector<int> nums(d + 1);
	for (int i = 1; i < d; ++i)
		nums[i] = nums[i&(i - 1)] + 1;

	cout << nums[d] << endl;
	system("pause");
	return 0;
}