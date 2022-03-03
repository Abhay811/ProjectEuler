#include "temp.hpp"

int main()
{
  int l, span;
  string num;
  cin >> l >> span >> num;
  ll s = 0;
  cout << num.length() << endl;
  for (int i = 0; i <= l - span; ++i)
  {
    ll temp = 1;
    for (int j = 0; j < span; ++j)
      temp *= (num[i + j] - '0');
    s = fun::max (s, temp);
  }
  cout << s << endl;
}