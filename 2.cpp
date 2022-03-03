#include "../temp.hpp"

int main()
{
  int a = 1, b = 2, c;
  ll s = 0;
  int i = 0;
  while (b <= 4000000)
  {
    if (b % 2 == 0)
      s += b;
    auto next = a + b;
    a = b;
    b = next;
  }
  cout << s;
}