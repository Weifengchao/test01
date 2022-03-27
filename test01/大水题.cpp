#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;

//void function()
//{
//	int n, m;
//	cin >> n >> m;
//	vector<unordered_map<int, int>> v_recoder;
//	vector<int> ans;
//	vector<int> v_find;
//	int l, r, z, x;
//	int selcet = 0;
//	int sum = 0;
//	unordered_map<int, int> m_temp;
//	while (m)
//	{
//		sum = 0;
//		m_temp.clear();
//		cin >> selcet;
//		if (!selcet)
//		{
//			cin >> l >> r >> z;
//			for (; l <= r; ++l)
//			{
//				m_temp.insert(make_pair(l, z));
//			}
//			//m_temp.insert(make_pair(l, ))
//			v_recoder.push_back(m_temp);
//
//		}
//		else
//		{
//			cin >> x;
//			v_find.push_back(x);
//		}	
//		m--;
//	}
//	for (int i = 0; i < v_find.size(); ++i)
//	{
//		sum = 0;
//		for (int j = 0; j < v_recoder.size(); ++j)
//		{
//
//			if (v_recoder[j].find(v_find[i]) != v_recoder[j].end())
//			{
//				continue;
//			}
//			for (unordered_map<int, int>::iterator it = v_recoder[j].begin(); it != v_recoder[j].end(); it++)
//			{
//				sum += it->second;
//			}
//		}
//		cout << sum << endl;
//	}
//
//}

//void function()
//{
//	int n, m;
//	cin >> n >> m;
//	vector<vector<long long>> v_recoder;
//	vector<long long> v_temp;
//	vector<long long> ans;
//	int l, r, z, x;
//	int selcet = 0;
//	int sum = 0;
//	
//	while (m)
//	{
//		sum = 0;
//		v_temp.clear();
//		cin >> selcet;
//		if (!selcet)
//		{
//			cin >> l >> r >> z;
//			v_temp.push_back(l);
//			v_temp.push_back(r);
//			v_temp.push_back(z);
//			v_temp.push_back((r - l + 1)*z);
//			v_recoder.push_back(v_temp);
//		}
//		else
//		{
//			cin >> x;
//			for (int i = 0; i < v_recoder.size(); ++i)
//			{
//				if (x >= v_recoder[i][0] && x <= v_recoder[i][1])
//				{
//					continue;
//				}
//				sum += v_recoder[i][2];
//			}
//			ans.push_back(sum);
//		}
//		m--;
//	}
//	for (int i = 0; i < ans.size(); ++i)
//	{
//		cout << ans[i] << endl;
//	}
//}
//
//void function()
//{
//	int n, m;
//	cin >> n >> m;
//	vector<vector<int>> v_recoder;
//	vector<int> v_temp;
//	vector<int> ans;
//	int l, r, z, x;
//	int selcet = 0;
//	int sum = 0;
//
//	while (m)
//	{
//		sum = 0;
//		v_temp.clear();
//		cin >> selcet;
//		if (!selcet)
//		{
//			cin >> l >> r >> z;
//			v_temp.push_back(l);
//			v_temp.push_back(r);
//			v_temp.push_back(z);
//			v_temp.push_back((r - l + 1)*z);
//			v_recoder.push_back(v_temp);
//		}
//		else
//		{
//			cin >> x;
//			for (int i = 0; i < v_recoder.size(); ++i)
//			{
//				if (x >= v_recoder[i][0] && x <= v_recoder[i][1])
//				{
//					continue;
//				}
//				sum += v_recoder[i][2];
//			}
//			ans.push_back(sum);
//		}
//		m--;
//	}
//	for (int i = 0; i < ans.size(); ++i)
//	{
//		cout << ans[i] << endl;
//	}
//}
//
//void function()
//{
//	int n, m;
//	cin >> n >> m;
//	vector<vector<int>> v_recoder;
//	vector<int> v_temp;
//	vector<int> ans;
//	vector<int> v_find;
//	int l, r, z, x;
//	int selcet = 0;
//	int sum = 0;
//	while (m)
//	{
//		v_temp.clear();
//		cin >> selcet;
//		if (!selcet)
//		{
//			cin >> l >> r >> z;
//			v_temp.push_back(l);
//			v_temp.push_back(r);
//			v_temp.push_back(z);
//			v_temp.push_back((r - l + 1)*z);
//			v_recoder.push_back(v_temp);
//		}
//		else
//		{
//			cin >> x;
//			v_find.push_back(x);
//		}
//		m--;
//	}
//	for (int i = 0; i < v_find.size(); ++i)
//	{
//		sum = 0;
//		for (int j = 0; j < v_recoder.size(); ++j)
//		{
//			if (x >= v_recoder[j][0] && x <= v_recoder[j][1])
//			{
//				continue;
//			}
//			sum += v_recoder[j][2];
//		}
//		cout << sum;
//		//		ans.push_back(sum);
//		//		cout << ans[i] << endl;
//	}
//}

//Ë«map  multi  unorder
void function()
{
	int n, m;
	cin >> n >> m;
	multimap<int, int> m_recoder;
	unordered_map<int, int> m_score;

	vector<int> ans;
	int l, r, z, x;
	int selcet = 0, num = 1;
	int sum = 0;

	while (m)
	{
		sum = 0;
		cin >> selcet;
		if (!selcet)
		{
			cin >> l >> r >> z;
			m_score.insert(make_pair(num, (r - l + 1)*z));  //ÆÀ·Ö±àºÅ  ·ÖÊý
			for (; l <= r; ++l)
			{
				m_recoder.insert(make_pair(l, num));
			}

			num++;
		}
		else
		{
			unordered_map<int, int> temp = m_score;
			cin >> x;
			multimap<int, int>::iterator it = m_recoder.find(x);
			for (int i = 0; i < m_recoder.count(x); it++, ++i)
			{
				//cout << "num_sec = "<<it->second << endl;
				temp.erase(it->second);
			}
			for (unordered_map<int, int>::iterator m_it = temp.begin(); m_it != temp.end(); m_it++)
			{
				sum += m_it->second;
			}
			ans.push_back(sum);
		}
		m--;
	}
	for (int i = 0; i < ans.size(); ++i)
	{
		cout << ans[i] << endl;
	}
}


int main()
{
	function();
	system("pause");
	return 0;
}

//int main()
//{
//	//	function();
//	multimap<int, int> v;
//	v.insert(make_pair(1, 2));
//	v.insert(make_pair(3, 3));
//	v.insert(make_pair(2, 5));
//	v.insert(make_pair(1, 8));
//
//
//
//	multimap<int, int>::iterator it = v.find(1);
//	for (int i = 0;  i < v.count(1); it++, ++i)
//		cout << it->second << endl;
//	//system("pause");
//	return 0;
//}