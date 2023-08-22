#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k, i=0;
    cin >> n >> k;
    int x;
    vector<int> v;
    set<pair<int, int>> s;
    for (i = 0; i < n;++i)
    {
        cin >> x;
        v.push_back(x);
        if(i < k)
            s.insert(make_pair(x,i));
    }
    i = 1;
    set<pair<int, int>>::iterator it;
    for (it = s.begin(); it != s.end(); ++it)
    {
        if(i == (k+1)/2)
            break;
        i++;
    }
    cout << (*it).first << " ";

    for (i = 0; i < n - k; ++i)
    {
        s.insert(make_pair(v[k + i], i+k));
        if(v[k + i] >= (*it).first && v[i] <= (*it).first)
            it++;
        else if((v[k + i] < (*it).first && v[i] > (*it).first) || (make_pair(v[i], i) == *it && v[k+i] < (*it).first))
            it--;
        s.erase(make_pair(v[i], i));
        cout << (*it).first << " ";
    }
}