#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k, cnt;
    cin >> n >> k ;
    ordered_set s;
    for (int i = 1; i <= n; ++i)
        s.insert(i);
    cnt = k % n;
    while(int(s.size()) > 1)
    {
        cout << *s.find_by_order(cnt) <<" ";
        s.erase(s.find_by_order(cnt));
        cnt = (cnt + k % s.size()) % s.size();
    }
    cout << *s.begin();
    return 0;
}
