#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k, a, b, counter = 0;
    vector<array<int, 2>> v;
    multiset<int> s;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        v.push_back(array<int, 2> {b, a});
    }
    sort(v.begin(), v.end());
    
    for (auto i : v)
    {
        auto it = s.upper_bound(i[1]);
        if(it != s.begin())
        {
            s.erase(prev(it));
            s.insert(i[0]);
            counter++;
        }
        else if(int(s.size()) < k)
        {
            s.insert(i[0]);
            counter++;
        }
    }
    cout << counter;
}