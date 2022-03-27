#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a, b;
	a = b = n / 2;
	if (n % 2 != 0) a++;
	for (int i = 1; i <= b; ++i)
		cout << i * 2 << " ";
	for (int i = 1; i <= a; ++i)
		cout << i * 2 - 1 << " ";
	system("pause");
	return 0;
}