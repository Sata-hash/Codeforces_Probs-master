#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int k;
  cin >> k;
  int r;
  for (int i = 1; i <= k; i++)
  {
    r = n % 10;
    if (r == 0)
      n /= 10;
    else
      n -= 1;
  }
  cout << n << endl;
  return 0;
}