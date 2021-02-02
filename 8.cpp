#include <bits/stdc++.h>
using namespace std;
#define io freopen("8.txt", "r", stdin);
#define ll long long
int main()
{
    io;
    string str[20];
    vector<int> a(1000);
    int k = 0, r;
    ll s = 0, m = 0;
    for (int i = 0; i < 20; i++)
        cin >> str[i];
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 50; j++)
            a[k++] = str[i][j] - 48;
    for (int i = 0; i < 1000; i++)
    {
        s = 1, r = i + 13;
        for (int j = i; j < r; j++)
            s *= a[j];
        // cout << s << " ";
        m = max(s, m);
    }
    cout << m << endl;
}