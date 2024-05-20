#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int MxN = 1000000007;

int dp(int x, vector<int>& coins){
  vector<int> arr(x+1, 0);
  arr[0] = 1;
  for (auto & coin : coins){
    for (int j = 1; j <= x; ++j){
      if (j - coin >= 0)
        arr[j] = (arr[j - coin] + arr[j]) % MxN;
    }
  }
  return arr[x];
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
  cout << dp(x, coins);
}