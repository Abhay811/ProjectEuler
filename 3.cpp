#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n = 600851475143;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            cout << i << " ";
        }
    if (n > 1)
        cout << n << endl;

}