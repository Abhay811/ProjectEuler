#include <bits/stdc++.h>
using namespace std;

bool isPallindrome(int n)
{
    int s = n, a = 0, r;
    while (n)
    {
        r = n % 10;
        a = a * 10 + r;
        n /= 10;
    }
    if (s == a)
        return true;
    return false;
}
int main()
{
    int m, smax = 0;
    for (int i = 100; i < 1000; i++)
        for (int j = 100; j < 1000; j++)
        {
            m = i * j;
            if (isPallindrome(m))
                smax = max(smax, m);
        }
    cout << smax << endl;
}