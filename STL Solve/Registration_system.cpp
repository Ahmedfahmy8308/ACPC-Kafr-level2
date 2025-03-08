/*
_   _                        _      __       _
/_\ | |__  _ __ ___   ___  __| |    / _| __ _| |__  _ __ ___  _   _
/ _ \| '_ \| '_ ` _ \ / _ \/ _` |   | |_ / _` | '_ \| '_ ` _ \| | | |
/  _  | | | | | | | | |  __| (_| |   |  _| (_| | | | | | | | | | |_| |
\_/ \_|_| |_|_| |_| |_|\___|\__,_|   |_|  \__,_|_| |_|_| |_| |_|\__, |
|___/    */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double

#define INF 1e9
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define el << '\n'
#define all(x) x.begin(), x.end()
#define cel cout << '\n';
#define cinv(v)         \
	for (auto &ele : v) \
		cin >> ele;
#define coutv(v)        \
	for (auto &ele : v) \
		cout << ele << " ";
#define forv(i, n) for (ll i = 0; i < n; i++)

#define coutmap(mp)     \
	for (auto x : mp)   \
		cout << x.first << " " << x.second el;





void solve()
{
	int n ; cin >> n;
	string s;
	map<string, int> mp;
	while (n--)
	{
		cin >> s;
		if (!mp[s]){
			cout << "OK" el;
		}
		else
		{
			cout << s << mp[s] el;
		}
		
		mp[s]++;
	}
	
}
int main()
{

#ifdef _fahmy
	freopen("input.in", "rt", stdin);
	freopen("output.out", "w", stdout);
#endif
	IO;
	ll t = 1;
	// cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}
