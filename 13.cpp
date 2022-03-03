#include "temp.hpp"

int main()
{
  vector<string> str(100);
  for (auto &it : str)
    cin >> it;
  string res = "";
  int j = 49, r = 0;
  while (j >= 0)
  {
    int s = r;
    for (int i = 0; i < 100; ++i)
      s += str[i][j] - '0';
    res += to_string(s % 10);
    r = s / 10;
    j--;
  }
  while (r)
  {
    res += to_string(r % 10);
    r /= 10;
  }
  reverse(res.begin(), res.end());
  cout << res.substr(0, 10);
}