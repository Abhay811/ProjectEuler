#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n = 200000;
int main()
{
    vector<char> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 4; i <= n; i += 2)
        is_prime[i] = false;
    for (ll i = 3; i * i <= n; i += 2)
        if (is_prime[i])
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
    int c = 0;
    for (int i = 2; i < n; i++)
    {
        if (is_prime[i])
            c++;
        if (c == 10001)
        {
            cout << i << endl;
            break;
        }
    }
}