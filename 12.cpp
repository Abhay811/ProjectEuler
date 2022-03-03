#include "temp.hpp"

int main()
{
  int div = 1000;
  vector<unsigned int> sm;
  sm.emplace_back(0);
  unsigned int ind = 0;
  unsigned int tri = 0;
  while (sm.size() < div)
  {
    ind++;
    tri += ind;
    if (sm.size() > 300 && tri % 10 != 0)
      continue;
    unsigned int d = 0;
    unsigned int i = 1;
    while (i * i < tri)
    {
      if (tri % i == 0)
        d += 2;
      i++;
    }
    if (i * i == tri)
      d++;
    while (sm.size() <= d)
      sm.emplace_back(tri);
  }
  int n;
  cin >> n;
  cout << sm[n + 1] << endl;
}