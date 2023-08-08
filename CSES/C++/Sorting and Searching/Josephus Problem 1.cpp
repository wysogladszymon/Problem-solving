#include <bits/stdc++.h>

typedef long long ll;

using namespace std;
int main() {
    int n;
    cin >> n;
    queue<int> q;
    for (int i = 1; i <= n; ++i)
        q.push(i);

    int k = 1;
    if (n==1)
        cout << 1;
    else
    {
        while (q.size() != 0)
        {
            for (int i = 0; i < k; ++i)
            {
                q.push(q.front());
                q.pop();
            }
            cout << q.front() << " ";
            q.pop();
        }
    }

    return 0;
}
