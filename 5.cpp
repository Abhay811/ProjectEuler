#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b)
{
    return b ? gcd (b, a % b) : a;
}
int main()
{
    ll m = 2;
    for (int i = 3; i < 20; i++)
        m = (m * (i)) / gcd(m, i);
    cout << m << endl;
}