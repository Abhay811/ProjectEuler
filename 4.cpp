#include "../temp.hpp"

bool checkPalindrome(int s)
{
  int n = s;
  int r, m = 0;
  while (n)
  {
    r = n % 10;
    m = m * 10 + r;
    n /= 10;
  }
  if (m == s)
    return true;
  else return false;
}
int main()
{
  int n = 100;
  int m = 1000;
  int mx = 0;
  for (int i = 100; i < m; ++i)
    for (int j = i + 1; j < m; ++j)
    {
      ll s = i * j;
      if (checkPalindrome(s))
        mx = max (mx, s);
    }
  cout << mx;
}