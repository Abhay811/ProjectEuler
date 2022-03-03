#include "../temp.hpp"

int main()
{
  int n = 1000000;
  ll mx = 0;
  int i = 2;
  int num = 0;
  while (i < n)
  {
    ll s = 0;
    ll k = i;
    while (k != 1)
    {
      if (k & 1) k = 3 * k + 1;
      else k /= 2;
      s++;
    }
    if (s > mx)
      num = i;
    mx = fun::max(s, mx);
    
    i++;
  }
  cout << num << endl;
}