#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using pii = pair<int, int>;
using ll = long long;
bool cmp(pii a, pii b)
{
	return a.second < b.second;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int test; cin >> test;
	while(test--)
	{
		int n; cin >> n;
		vector <pii> v;
		for(int i = 0; i < n; i++)
		{
			int x, y; cin >> x >> y;
			v.push_back({x, y});
		}
		sort(v.begin(), v.end(), cmp);
		int cnt = 1, T = v[0].second;
		for(int i = 1; i < n; i++)
		{

			if(T <= v[i].first) 
			{
				cnt++;
				T = v[i].second;

			}
		}
		cout << cnt << endl;
	}
	return 0;
}