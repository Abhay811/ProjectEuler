#include <bits/stdc++.h>
using namespace std;
int n = 1000;
int main()
{
    int s = 0;
    for (int i = 3; i < n; i++)
        if (i % 3 == 0 or i % 5 == 0)
            s += i;
    cout << s << endl;
}