#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n = 100;
    ll s = 0, s1 = n * (n + 1) / 2;
    for (int i = 1; i <= n; i++)
        s += i * i;
    s1 *= s1;
    cout << s1 - s << endl;
}