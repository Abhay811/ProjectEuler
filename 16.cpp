#include "temp.hpp"

int main()
{
  string res = "2";
  int i = 1;
  int r = 0;
  while (i < 1000)
  {
    string str = res;
    res = "";
    for (int j = 0; j < str.size(); ++j)
    {
      int s = (str[j] - '0') * 2 + r;
      res = res + to_string(s % 10);
      r = s / 10;
    }
    while (r)
    {
      res += to_string(r % 10);
      r /= 10;
    }
    cout << res << endl;
    r = 0;
    i++;
  }
  ll out = 0;
  for (auto it : res)
    out += (it - '0');
  cout << out << endl;
}