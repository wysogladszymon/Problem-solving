#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

bool compare (array<int, 3> a, array<int, 3> b)
{
    if (a[0] != b[0])
        return a[0] < b[0];
    else
        return a[1] > b[1];
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, a, b;
    cin >> n;
    vector<int> tab(n,0);
    vector<int> tab2(n,0);
    vector<array<int,3>> v;
    ordered_set s;
    v.push_back(array<int, 3> {-1, -1, -1});
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        v.push_back(array <int, 3> {b, a, i});
    }
    sort(v.begin(), v.end(), compare);

    for (auto it = next(v.begin()); it != v.end(); it++)
    {
        s.insert({(*it)[1], (*it)[0]});
        tab[(*it)[2]] = int(s.size()) - s.order_of_key({(*it)[1], -1}) - 1;
    }    
    for (auto it : tab)
        cout << it << " ";

    s.clear();
    cout << "\n";

    for (auto it = prev(v.end()); it != prev(v.begin()); it--)
    {
        s.insert({(*it)[1], (*it)[0]});
        tab2[(*it)[2]] = s.order_of_key({(*it)[1] + 1, -1}) - 1;
    }
    for (auto it : tab2)
        cout << it << " ";
    return 0;
}
