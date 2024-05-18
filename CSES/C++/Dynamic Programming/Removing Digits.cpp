#include <bits/stdc++.h>

using namespace std;
#define ll long long


int dp(int x, vector<int>& v){

  if (v[x] != -1)
    return v[x];
  int min = 2e6;
  int a, y, sol;
  y = x;
  while (y > 0){
    a = y % 10;
    y = y / 10;
    if (a == 0){
      continue;
    }
    sol = dp(x - a, v) + 1;
    if (sol < min){
      min = sol;
    }
  }
  v[x] = min;
  return v[x];
}


int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  vector<int> v(n+1, -1);
  v[0] = 0;
  cout << dp(n, v);  
}