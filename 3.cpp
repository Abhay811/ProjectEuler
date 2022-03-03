#include "../temp.hpp"

int main()
{
  ll s = 600851475143;
  for (ll f = 2; f * f <= s; ++f)
    while(s % f == 0 && s != f)
      s /= f;
  cout << s;
}