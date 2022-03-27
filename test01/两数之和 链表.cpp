/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* stringToListNode();
//class Solution {
//public:
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		vector<int> v_num1;
//		vector<int> v_num2;
//		ListNode *ptr = NULL;
//		ptr = l1;
//		while (ptr)
//		{
//			v_num1.push_back(ptr->val);
//			ptr = ptr->next;
//		}
//		for (int i = 0; i < v_num1.size(); i++)
//		{
//			cout << v_num1[i] << " ";
//		}
//		cout << endl;
//		ptr = l2;
//		while (ptr)
//		{
//			v_num2.push_back(ptr->val);
//			ptr = ptr->next;
//		}
//		vector<int>::reverse_iterator rit1_1 = v_num1.rbegin();
//		for (; rit1_1 != v_num1.rend(); rit1_1++)
//			cout << *rit1_1 << " ";
//		cout << endl;
//		vector<int> temp;
//		if (v_num1.size() < v_num2.size())
//			v_num1.swap(v_num2);
//		vector<int>::iterator it1 = v_num1.begin();
//		vector<int>::iterator it2 = v_num2.begin();
//		//cout << *rit1 << " " << *rit2 << endl;
//		//cout << *rit1 + *rit2 << endl;
//		vector<int> v_result(v_num1.size() + 1, 0);
//		for (int i = 0; it1 != v_num1.end(); it1++, i++)
//		{
//			cout << "i= " << i << "  " << "rit1=" << *it1 << "  ";
//			int bits = 0;
//			if (it2 == v_num2.end())
//				bits = *it1 + 0 + v_result[i];
//			else
//				bits = *it1 + *it2 + v_result[i];
//			//cout << "bits = " << bits << "  ";
//			if (bits >= 10)
//			{
//				v_result[i] = bits % 10;
//				cout << "v_result[i]= " << v_result[i] << " ";
//				v_result[i + 1] = 1;
//			}
//			else
//			{
//				v_result[i] = bits;
//				cout << "v_result[i]= " << v_result[i] << " ";
//			}
//			if (it2 != v_num2.end())
//				it2++;
//			cout << endl;
//		}
//		cout << endl;
//		if (v_result[v_result.size() - 1] == 0)
//			v_result.pop_back();
//		for (int i = 0; i < v_result.size(); i++)
//		{
//			cout << v_result[i] << " ";
//		}
//		cout << endl;
//
//		
//		ListNode *RootNode = new ListNode(0);
//		ptr = RootNode;
//		
//		for (vector<int>::iterator it = v_result.begin(); it != v_result.end(); it++)
//		{
//			//cout << *it << " " << endl;
//			ptr->next = new ListNode(*it);
//			ptr = ptr->next;
//		}
//		ptr = RootNode->next;
//		delete RootNode;
//		RootNode = NULL;
//		return ptr;
//		
//	}
//};
//class Solution {
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		ListNode *root = new ListNode(0);
//		ListNode *cursor = root;
//		int carry = 0;
//		while (l1 !=  || l2 != null || carry != 0) {
//			int l1Val = l1 != null ? l1.val : 0;
//			int l2Val = l2 != null ? l2.val : 0;
//			int sumVal = l1Val + l2Val + carry;
//			carry = sumVal / 10;
//
//			ListNode sumNode = new ListNode(sumVal % 10);
//			cursor.next = sumNode;
//			cursor = sumNode;
//
//			if (l1 != null) l1 = l1.next;
//			if (l2 != null) l2 = l2.next;
//		}
//
//		return root.next;
//	}
//}
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *head = nullptr, *tail = nullptr;
		int carry = 0;
		while (l1 || l2 || carry) {
			int n1 = l1 ? l1->val : 0;    //当短的链表取完值 不能读取l1->val  会出现内存错误  所以进行判断  读取完毕返回0
			int n2 = l2 ? l2->val : 0;
			int sum = n1 + n2 + carry;
			if (!head) {
				head = tail = new ListNode(sum % 10);
			}
			else {
				tail->next = new ListNode(sum % 10);
				tail = tail->next;
			}
			carry = sum / 10;
			if (l1) {
				l1 = l1->next;
			}
			if (l2) {
				l2 = l2->next;
			}
		}
		//if (carry > 0) {
		//	tail->next = new ListNode(carry);
		//}
		return head;
	}
};

void trimLeftTrailingSpaces(string &input) {
	input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
		return !isspace(ch);
	}));
}

void trimRightTrailingSpaces(string &input) {
	input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
		return !isspace(ch);
	}).base(), input.end());
}

vector<int> stringToIntegerVector(string input) {
	vector<int> output;
	trimLeftTrailingSpaces(input);
	trimRightTrailingSpaces(input);
	input = input.substr(1, input.length() - 2);
	stringstream ss;
	ss.str(input);
	string item;
	char delim = ',';
	while (getline(ss, item, delim)) {
		output.push_back(stoi(item));
	}
	return output;
}

ListNode* stringToListNode(string input) {
	// Generate list from the input
	vector<int> list = stringToIntegerVector(input);

	// Now convert that list into linked list
	ListNode* dummyRoot = new ListNode(0);
	ListNode* ptr = dummyRoot;
	for (int item : list) {
		ptr->next = new ListNode(item);
		ptr = ptr->next;
	}
	ptr = dummyRoot->next;
	delete dummyRoot;
	return ptr;
}

string listNodeToString(ListNode* node) {
	if (node == nullptr) {
		return "[]";
	}

	string result;
	while (node) {
		result += to_string(node->val) + ", ";
		node = node->next;
	}
	return "[" + result.substr(0, result.length() - 2) + "]";
}

int main() {
	string line;
	while (getline(cin, line)) {
		ListNode* l1 = stringToListNode(line);
		getline(cin, line);
		ListNode* l2 = stringToListNode(line);

		ListNode* ret = Solution().addTwoNumbers(l1, l2);

		string out = listNodeToString(ret);
		cout << out << endl;
	}
	system("pause");
	return 0;
}