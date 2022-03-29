#include<iostream>
#include<cmath>
using namespace std;

inline bool judedge(float a) {
	if (a - (int)a == 0)
		return true;
	else
		return false;
}

//shishi123
int main()
{
	int T, N;
	cin >> T;
	while (T--) {
		cin >> N; 
		int cnt = 1;
		for (int i = 2; i <= sqrt(N); ++i) {
			int a = N / i;
			if ( (N % i) == 0) {
				if (a % i != 0) {
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	system("pause");
	return 0;
}