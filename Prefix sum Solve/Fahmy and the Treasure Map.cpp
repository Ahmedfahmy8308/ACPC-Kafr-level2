#include <bits/stdc++.h>
using namespace std;

/*
   _   _                        _      __       _
  /_\ | |__  _ __ ___   ___  __| |    / _| __ _| |__  _ __ ___  _   _
 / _ \| '_ \| '_ ` _ \ / _ \/ _` |   | |_ / _` | '_ \| '_ ` _ \| | | |
/  _  | | | | | | | | |  __| (_| |   |  _| (_| | | | | | | | | | |_| |
\_/ \_|_| |_|_| |_| |_|\___|\__,_|   |_|  \__,_|_| |_|_| |_| |_|\__, |
                                                                |___/ 
*/

#define ll long long
#define lld long double
#define INF 1e9
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define el << '\n'
#define all(x) x.begin(), x.end()
#define cel cout << '\n';
#define cinv(v)    for (auto &ele : v) cin >> ele;
#define cin2v(v)   for (auto &ele : v) { for (auto &e : ele) cin >> e; }
#define coutv(v)   for (auto &ele : v) cout << ele << " ";
#define cout2v(v)  for (auto &ele : v) { for (auto &e : ele) cout << e << " "; cel }
#define forv(i, n) for (ll i = 0; i < n; i++)
#define coutmap(mp)for (auto x : mp) cout << x.first << " " << x.second el;


ll get_sum(vector<vector<ll>> &v, int r1, int c1, int r2, int c2)
{
    ll sum = 0;
    sum += v[r2][c2];
    if (r1 > 0)
        sum -= v[r1 - 1][c2];
    if (c1 > 0)
        sum -= v[r2][c1 - 1];
    if (r1 > 0 && c1 > 0)
        sum += v[r1 - 1][c1 - 1];
    return sum;
}

void solve()
{
    int n, m, q;
    cin >> n >> m;
    vector<vector<ll>> v(n, vector<ll>(m));
    cin2v(v);
    for (int i = 0; i < n; i++)
        for (int j = 1; j < m; j++)
            v[i][j] += v[i][j - 1];
    for (int i = 1; i < n; i++)
        for (int j = 0; j < m; j++)
            v[i][j] += v[i - 1][j];
    cin >> q;
    while (q--)
    {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        cout << get_sum(v, r1-1, c1-1, r2-1, c2-1) el;
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
