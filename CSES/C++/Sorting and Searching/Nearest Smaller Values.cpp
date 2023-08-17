#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
bool compare(pair<ll,int> &a, pair<ll,int> &b)
{
    if (a.first != b.first)
        return a.first < b.first;
    else
        return a.second > b.second;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    ll x;
    vector<pair<ll, int>> v;
    set<int> s;
    cin >> n;
    vector<int> ans(n, 0);
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        v.push_back(make_pair(x, i));
    }
    sort(v.begin(), v.end(), compare);
    s.insert(v[0].second);
    cout << " ";
    for (auto a = next(v.begin()); a != v.end(); ++a)
    {
        auto it = s.lower_bound((*a).second);
        if(it != s.begin())
        {
            it--;
            ans[(*a).second - 1] = *it;
        }
        s.insert((*a).second);
    }

    for ( auto a : ans)
        cout << a << " ";
}