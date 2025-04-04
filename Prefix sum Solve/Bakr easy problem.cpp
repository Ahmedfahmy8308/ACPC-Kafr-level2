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

const ll mod = 1e9 + 7;





void solve()
{
	int n , m;
	cin >> n >> m;
	vector<vector<char>> v(n,vector<char>(m));
	vector<vector<vector<int>>> presum (26,vector<vector<int>>(n , vector<int>(m,0)));

	for (auto &i : v)
		cinv(i);

	for(int i = 0 ; i < 26 ; i++){
		presum[i][0][0] = (v[0][0] == 'a' + i);
		for(int j = 1 ; j < m ; j++){
			presum[i][0][j] = presum[i][0][j-1] + (v[0][j] == 'a' + i);
		}
		for(int j = 1 ; j < n ; j++){
			presum[i][j][0] = presum[i][j-1][0] + (v[j][0] == 'a' + i);
		}
		
		for(int j = 1 ; j < n ; j++){
			for(int k = 1 ; k < m ; k++){
				presum[i][j][k] = presum[i][j-1][k] + presum[i][j][k-1] - presum[i][j-1][k-1] + (v[j][k] == 'a' + i);
			}
		}
	}

	


	int q ;
	cin >> q;
	int r1 , c1 , r2 , c2;
	while(q--){
		cin >> r1 >> c1 >> r2 >> c2;
		r1-- , c1-- , r2-- , c2--;
		int st = r1*m + c1;
		int en = r2*m + c2;
		int pr = 0;
		for(int i = 0 ; i < 26 ; i++){
			int cnt ;
			cnt = presum[i][r2][c2] - (r1 > 0 ? presum[i][r1-1][c2] : 0) - (c1 > 0 ? presum[i][r2][c1-1] : 0) + (r1 > 0 && c1 > 0 ? presum[i][r1-1][c1-1] : 0);
			if(cnt % 2)
				pr++;
		}
		cout << (pr <= 1 ? "YES" : "NO")  el;
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
