#include<iostream>
#include<map>
#include<assert.h>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;

//class Solution {
//public:
//	int lengthOfLongestSubstring(string s) {
//		int num = 0;
//		int max = 0;
//		string find_s = "";
//		for (int i = 0; i < s.size(); i++)
//		{
//			num = 0;
//			find_s = "";
//			int j = i;
//			while (find_s.find(s[j]) == -1 && j < s.size())
//			{
//				num++;
//				find_s += s[j++];
//			}
//			cout << endl;
//			max = num > max ? num : max;
//			
//		}
//		return max;
//	}
//};
//class Solution {
//public:
//	int lengthOfLongestSubstring(string s) {
//		unordered_map<char, int> occ;
//		int num = 0, ans = 0;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (occ.find(s[i]) != occ.end())
//			{
//				num = occ.find(s[i])->second;
//				
//				occ.erase(s[i]);
//			}
//			ans = max(ans, i + 1 - num);
//			occ.insert(make_pair(s[i], i + 1));
//			for (unordered_map<char, int>::iterator it = occ.begin(); it != occ.end(); it++)
//			{
//				cout << it->first << ": " << it->second << "  ";
//			}
//			//cout << endl;
//			//cout << "map.size() = " << occ.size() << endl;
//				cout << i << ":" << ans << endl;
//		}
//		return ans;
//	}
//};
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		string occ;
		int rptr = -1, ans = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (i) occ.erase(0, 1);
			while (rptr + 1 < s.size() && occ.find(s[rptr + 1]) == -1)
			{
				occ += s[rptr + 1];
				++rptr;
			}
			ans = max(ans, rptr - i + 1);
		}
		return ans;
	}
};
string stringToString(string input) {
	assert(input.length() >= 2);
	string result;
	for (int i = 1; i < input.length() - 1; i++) {
		char currentChar = input[i];
		if (input[i] == '\\') {
			char nextChar = input[i + 1];
			switch (nextChar) {
			case '\"': result.push_back('\"'); break;
			case '/': result.push_back('/'); break;
			case '\\': result.push_back('\\'); break;
			case 'b': result.push_back('\b'); break;
			case 'f': result.push_back('\f'); break;
			case 'r': result.push_back('\r'); break;
			case 'n': result.push_back('\n'); break;
			case 't': result.push_back('\t'); break;
			default: break;
			}
			i++;
		}
		else {
			result.push_back(currentChar);
		}
	}
	return result;
}

int main() {
	string line;
	while (getline(cin, line)) {
		string s = stringToString(line);

		int ret = Solution().lengthOfLongestSubstring(s);

		string out = to_string(ret);
		cout << out << endl;
	}
	return 0;
}