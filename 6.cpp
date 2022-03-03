#include "../temp.hpp"

int main()
{
  int n = 100;
  ll s = 0, s2 = 0;
  s = (n * (n + 1) * (2 * n + 1)) / 6;
  s2 = (n * (n + 1)) / 2;
  s2 *= s2;
  cout << s2 - s;
}