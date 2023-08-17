#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, counter = 0;
    ll x, a, sum = 0;
    vector<ll> v;
    cin >> n >> x;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        v.push_back(a);
    }
    int head = 0, tail = 0;

    for (head = 0; head < n; head++)
    {
        sum += v[head];
        while(sum > x && tail <= head)
        {
            sum -= v[tail];
            tail++;
        }
        if(sum == x)
            counter++;
    }
    cout << counter;
}