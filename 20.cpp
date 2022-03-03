#include "temp.hpp"

int main()
{
  int n = 100;
  string s = "1", res;
  while (n)
  {
    int t = 0;
    res = "";
    for (int i = 0; i < s.size(); ++i)
    {
      int r = (s[i] - '0') * n + t;
      res += to_string(r % 10);
      t = r / 10;
    }
    while (t)
    {
      res += to_string(t % 10);
      t /= 10;
    }
    --n;
    s = res;
  }
  reverse(res.begin(), res.end());
  int sum = 0;
  for (auto it : res)
    sum += (it - '0');
  cout << sum << endl;
  cout << res;
}