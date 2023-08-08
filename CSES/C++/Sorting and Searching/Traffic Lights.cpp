#include <bits/stdc++.h>

typedef long long ll;

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll x, p, q;
    int n;
    cin >> x >> n;
    set<int> lights;
    multiset<int> lengths;

    lengths.insert(x);
    lights.insert(0);
    lights.insert(x);
    for (int i = 0; i < n; ++i)
    {
        cin >> p;
        set<int>::iterator up = lights.upper_bound(p);

        lights.insert(p);
        set<int>::iterator it = prev(up);
        set<int>::iterator down = prev(it);
        
        lengths.erase(lengths.find(*up - *down));
        lengths.insert(*up - *it);
        lengths.insert(*it - *down);
        cout << *prev(lengths.end()) <<" ";
    }
}