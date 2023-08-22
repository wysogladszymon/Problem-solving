#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k, x;
    cin >> n >> k;
    ll suml = 0, sumr = 0;
    vector<int> v;
    set<pair<int, int>> l, r, s;
    for (int i = 0; i < n;++i)
    {
        cin >> x;
        v.push_back(x);
        if(i < k)
            s.insert(make_pair(x,i));
    }
    int j = 0;
    if (k == 1)
    {
        for (int i = 0; i < n - k + 1; ++i)
            cout << 0 << " ";
        return 0;
    }
    if (k == 2)
    {
        for (int i = 0; i < n - k + 1; ++i)
            cout << abs(v[i] - v[i + 1]) << " ";
        return 0;
    }
    for ( auto i : s)
    {
        if(j < (k+1)/2)
        {
            l.insert(i);
            suml += ll(i.first);
        }
        else
        {
            r.insert(i);
            sumr += ll(i.first);
        }
        j++;
    }
    cout << (ll(l.size()) - ll(r.size())) * ll((*prev(l.end())).first) - suml + sumr <<" ";
    for (int i = 0; i < n - k; ++i)
    {
        if(v[i] > (*prev(l.end())).first)
        {
            r.erase({v[i], i});
            sumr -= v[i];
        }
        else
        {
            l.erase({v[i], i});
            suml -= v[i];
        }
        
        if (v[k + i] >= (*prev(l.end())).first)
        {
            r.insert({v[k + i], k + i});
            sumr += ll(v[k + i]);
        }
        else 
        {
            l.insert({v[k + i], k + i});
            suml += ll(v[k + i]);
        }
        
        while (r.size() > l.size())
        {
            suml += ll((*r.begin()).first);
            sumr -= ll((*r.begin()).first);
            l.insert(*r.begin());
            r.erase(r.begin());
        }
        while (l.size() - r.size() > 1)
        {
            suml -= ll((*prev(l.end())).first);
            sumr += ll((*prev(l.end())).first);
            r.insert(*prev(l.end()));
            l.erase(prev(l.end()));
        }
        cout << (ll(l.size()) - ll(r.size())) * ll((*prev(l.end())).first) - suml + sumr <<" ";
    }
}