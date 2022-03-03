#include "temp.hpp"


void sieve(int n)
{
  vector<bool> prime(n + 1, true);
  prime[0] = prime[1] = false;
  prime[2] = true;
  int c = 1;
  for (int i = 3; i * i <= n; i += 2)
    if (prime[i])
      for (int j = i * i; j <= n; j += i)
        prime[j] =false;
  for (int i = 3; i <= n; i += 2)
    if (prime[i])
    {
      c++;
      if (c == 10001)
      {
        cout << i << endl;
        break;
      }
    }
}
int main()
{
  sieve(200000);
}