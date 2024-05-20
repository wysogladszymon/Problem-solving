#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, x;
  cin >> n >> x;

  vector<int> prices(n, 0);
  vector<int> pages(n, 0);
  for (int i = 0; i < n; ++i)
    cin >> prices[i];

  for (int i = 0; i < n; ++i)
    cin >> pages[i];

  // sollution
  vector<int> dp(x + 1, 0);
  // table [x+1]x[n]

  for (int i = 0; i < n; ++i) {
    for (int y = x; y >= prices[i]; --y) {
      dp[y] = max(dp[y], pages[i] + dp[y - prices[i]]);
    }
  }
  cout << dp[x];
}