#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll dp[200000 + 10];
int main()
{
  int r, g;
  while (cin >> r >> g)
  {
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    int h = 1;
    while (h * (h + 1) / 2 <= (r + g))
      h++;
    h--;
    // dp[i][j] when reach to level i has used j red blocks
    for (int i = 1; i <= h; i++)
      for (int j = r; j >= i; j--)
      {
        dp[j] = (dp[j] + dp[j - i]) % mod;
      }
    ll sum = (h + 1) * h / 2;
    if (sum <= g)
      sum = 0;
    else
      sum -= g;
    ll ans = 0;
    for (int i = sum; i <= r; i++)
    {
      ans = (ans + dp[i]) % mod;
    }
    cout << ans << endl;
  }
  return 0;
}
