#include "../temp.hpp"

int main()
{
  int s = 1;
  for (int i = 2; i <= 20; ++i)
    s = fun::lcm(s, i);
  cout << s << endl;
}