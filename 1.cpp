#include "../temp.hpp"

int main()
{
  int s = 0;
  for (int i = 0; i < 1000; ++i)
    if (i % 3 == 0 or i % 5 == 0)
      s += i;
  cout << s << endl;
}