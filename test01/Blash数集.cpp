#include<iostream>
#include<queue>
using namespace std;
//queue<int> q;
int q[1024] = {0};
void Blash(int a, int n)
{
	q[1] = a;
	int two = 1, three = 1, rear = 2;
	while (rear <= n)
	{
		long long t1 = q[two] * 2 + 1, t2 = q[three] * 3 + 1;
		int t = min(t1, t2);
		t1 < t2 ? two++ : three++;
		if (t == q[rear - 1])
			continue;
		q[rear++] = t;
	}
	cout << q[n] << endl;
}

int main()
{
	int a, n;
	while (cin >> a >> n)
	{
		Blash(a, n);
	}
	system("pause");
	return 0;
}