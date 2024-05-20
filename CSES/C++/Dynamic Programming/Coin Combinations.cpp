#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int MxN = 1000000007;

int dp(int n, vector<int>& coins, vector<int>& v, vector<bool> & checked){
  if (checked[n])
    return v[n];

  for (auto & c : coins){
    if (n - c >= 0){
      v[n] = (v[n] + dp(n - c, coins, v, checked)) % MxN;
    }
  }
  checked[n] = true;
  return v[n];
}

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n, c, x;
  cin >> n >> x;
  vector<int> coins(n, 0);
  for (int i = 0; i < n; ++i){
    cin >> c;
    coins[i] = c;
  }
  vector<int> v(x + 1, 0);
  vector<bool> checked(x+1, false);
  v[0] = 1;
  checked[0] = true;
  cout << dp(x, coins, v, checked);
}
