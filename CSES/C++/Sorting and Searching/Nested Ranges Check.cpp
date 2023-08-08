#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

bool compare(array<ll, 3> a, array<ll, 3> b)
{
    if (a[0] == b[0])
        return a[1] < b[1];
    else
        return a[0] > b[0];
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    ll x, y;
    vector<bool> superset;
    vector<bool> subset;
    cin >> n;
    vector<array<ll,3>> v;
    ll h = 1e9;
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        subset.push_back(0);
        superset.push_back(0);
        v.push_back(array<ll, 3>{y, x, i}); // end, beginning , index;
    }
    sort(v.begin(), v.end(), compare);

    for(auto it : v)
    {
        if(h <= it[1])
            subset[it[2]] = 1;
        h = min(h, it[1]);
    }
    h = 0;
    for (int i = n - 1; i > -1; --i)
    {
        if(v[i][1] <= h)
            superset[v[i][2]] = 1;
        h = max(h, v[i][1]);
    }

    for (auto it : superset)
        cout << it << " ";
    cout << "\n";
    for (auto it : subset)
        cout << it << " ";
}