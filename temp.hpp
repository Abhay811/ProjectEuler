#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define INF (1 << 24)
#define endl '\n'
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0), cout.precision(15);
#define pb push_back
#define ppb pop_back
#define all(x) x.begin(), x.end()
#define mp(a, b) make_pair(a, b)
#define mt make_tuple
#define eb emplace_back

using ll = long long;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using ti = tuple<int, int, int>;
using vi = vector<int>;
using vpi = vector<pi>;
using vvi = vector<vi>;
using vs = vector<string>;
using vb = vector<bool>;
using vll = vector<ll>;
using mii = map<int, int>;
using msi = map<string, int>;
using mci = map<char, int>;
using si = set<int>;
using usi = unordered_set<int>;

#define iter(n) for (ll i = 0; i < n; ++i)
#define FOR(i, n) for (ll i = 0; i < n; ++i)
#define rfor(i, n) for (ll i = n; i >= 0; --i)
#define dfor(i, j, m, n)     \
  for (ll i = 0; i < m; ++i) \
    for (ll j = 0; j < n; ++j)

namespace fun 
{
  inline int abs(int x) { return x < 0 ? -x : x; }
  inline int max(const int &a, const int &b) { return a > b ? a : b; }
  inline ll max(const ll &a, const ll &b) { return a > b ? a : b; }
  inline int min(const int &a, const int &b) { return a < b ? a : b; }
  inline void swap(int &x, int &y) { x ^= y ^= x ^= y; }
  int gcd(int a, int b) { return !b ? a : gcd(b, a % b); }
  int lcm(int a, int b) { return (a / fun::gcd(a, b)) * b; }
} using namespace fun;

// cout << __cplusplus << end;
// 	array<int, 4> a = {1, 2, 3, 4};
// 	cout << INF << end;
// 	// at, [], front(), back(), iterators
// 	// empty, size, fill, swap
// 	// cout << get<1>(a);
	
// 	vector<int> vec(5);
// 	// vec.emplace_back(mp(1, 3));
// 	// clear, erase, push_back, emplace_back
// 	// insert, emplace, pop_back
// 	// front(), back(), empty, size, 
// 	// cout << vec.front();
// 	// cout << typeid(6.0).name();
// 	// std::string s{'a', 'b', 'c'};
// 	// cout << s << endl;
// 	// int n{};
// 	// cout << n;
// 	// std::string str{s, 2, 2};
// 	// cout << str << endl;
// 	cout << gcd(4,5);

// 	int z = {0};
// 	int x(1);