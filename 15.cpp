#include "../temp.hpp"

int main()
{
  __int128_t s = 1;
  for (int i = 21; i <= 40; ++i)
    s *= i;
  for (int i = 2; i <= 20; ++i)
    s /= i;
  cout << ll(s);
}