#include "temp.hpp"

int main()
{
  string a = "1", b = "1";
  string c;

  int res = 1;
  // cout << a.size();
  while (a.size() < 1000)
  {
    res ++;
    c = "";
    int t = 0;
    int i = a.size() - 1, j = b.size() - 1;
    for (; i >= 0; --i, --j)
    {
      int r = a[i] - '0' + b[j] - '0' + t;
      c += to_string(r % 10);
      t = r / 10;
    }
    while (j >= 0)
    {
      t = b[j] - '0' + t;
      c += to_string(t % 10);
      t /= 10;
      --j;
    }
    c += t > 0 ? to_string(t) : "";
    reverse(c.begin(), c.end());
    a = b;
    b = c;
    // for (auto it : c)
    //   cout << it;
    // cout << endl;
  }
  cout << res;
}