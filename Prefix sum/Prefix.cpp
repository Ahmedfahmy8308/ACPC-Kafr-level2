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
#define cout2v(v)       \
    for (auto &ele : v) { \
        for(auto &e : ele) cout << e << " "; \
        cel \
    }
#define forv(i, n) for (ll i = 0; i < n; i++)

#define coutmap(mp)   \
    for (auto x : mp) \
        cout << x.first << " " << x.second el;




int partial_sum(vector<ll> &v , int st , int en){
    int sum = 0;
    for (int i = st; i <= en; i++)
    {
        sum += v[i];
    }
}

void calc_prefix_sum(vector<ll> &v){
    for (int i = 1; i < v.size(); i++)
    {
        v[i] += v[i - 1];
    }
}

void calc_prefix_sum_2d(vector<vector<ll>> &v){
    for (int i = 1; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            v[i][j] += v[i - 1][j];
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 1; j < v[i].size(); j++)
        {
            v[i][j] += v[i][j - 1];
        }
    }
}

int get_range_sum_1d_prefix_sum(vector<ll> &v , int st , int en){
    return v[en] - (st == 0 ? 0 : v[st - 1]);
}

int get_range_sum_2d_prefix_sum(vector<vector<ll>> &v , int i1 , int j1 , int i2 , int j2){
    int sum = v[i2][j2];
    if(i1 > 0) sum -= v[i1 - 1][j2];
    if(j1 > 0) sum -= v[i2][j1 - 1];
    if(i1 > 0 && j1 > 0) sum += v[i1 - 1][j1 - 1];
    return sum;
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
        vector<ll> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        calc_prefix_sum(v);
        coutv(v);
        cel cel 

        vector<vector<ll>> vv = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
        calc_prefix_sum_2d(vv);
        cout2v(vv) ;
        cel;

        cout << get_range_sum_1d_prefix_sum(v , 2 , 5) el;
        cout << get_range_sum_2d_prefix_sum(vv , 0 , 0 , 1 , 1) el;
    }

    return 0;
}
