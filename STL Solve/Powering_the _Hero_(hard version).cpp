/*
   _   _                        _      __       _
  /_\ | |__  _ __ ___   ___  __| |    / _| __ _| |__  _ __ ___  _   _
 / _ \| '_ \| '_ ` _ \ / _ \/ _` |   | |_ / _` | '_ \| '_ ` _ \| | | |
/  _  | | | | | | | | |  __| (_| |   |  _| (_| | | | | | | | | | |_| |
\_/ \_|_| |_|_| |_| |_|\___|\__,_|   |_|  \__,_|_| |_|_| |_| |_|\__, |
                                                                |___/    
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

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


void solve()
{
    int n; ll ans = 0;
    cin >> n;
    vector<int> v(n);
    priority_queue<int> pq;
    cinv(v);
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0) {
            pq.push(v[i]);
        } else if (!pq.empty() && v[i] == 0) {
            ans += pq.top();
            pq.pop();
        }
    }
    cout << ans el;

}

int main()
{

#ifdef _fahmy
    freopen("input.in", "rt", stdin);
    freopen("output.out", "w", stdout);
#endif
    IO;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
