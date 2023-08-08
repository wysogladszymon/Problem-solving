#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, counter = 0;
    ll a, b;
    cin >> n;
    set<pair<ll, int>> s;
    vector<int> v(n,0);
    vector<array<ll, 3>> clients;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        clients.push_back(array<ll, 3> {a, b, ll(i)});
    }
    
    sort(clients.begin(), clients.end());

    for (auto elem : clients)
    {
        auto it = s.lower_bound(make_pair(elem[0], 0)); 
        if( it == s.begin())
        {
            counter++;
            v[elem[2]] = counter;
            s.insert(make_pair(elem[1], counter));
        }
        else
        {
            it--;
            v[elem[2]] = (*it).second;
            a = ll((*it).second); 
            s.erase(it); 
            s.insert(make_pair(elem[1], int(a)));
        }
    }
    cout << counter <<endl;
    for(auto elem : v)
        cout << elem << " ";
}