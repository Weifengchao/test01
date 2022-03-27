#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int R = 3, L = 3, C = 1 + n;
	cout << R * L * C - n << endl;

	system("pause");
	return 0;
}