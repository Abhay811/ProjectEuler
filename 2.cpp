#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t0, t1, t2 = 0, n = 4000000;
    t0 = 1;
    t1 = 2;
    long long s = 2;
    while (t2 < n)
    {
        t2 = t1 + t0;
        if (t2 % 2 == 0)
            s += t2;
    }
    cout << s;
}