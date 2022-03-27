#include<iostream>
#include<string>
using namespace std;

void function()
{
	int n, m;
	cin >> n >> m;
	string s = to_string(m);
	itoa(m, s, 10);
	cout << s << endl;
}

int main()
{

	system("pause");
	return 0;
}