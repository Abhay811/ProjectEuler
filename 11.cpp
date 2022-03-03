#include "temp.hpp"

int main()
{
  vector<vector<int>> arr(20, vector<int> (20));
  for (int i = 0; i < 20; ++i)
  {
    for (int j = 0; j < 20; ++j)
      cin >> arr[i][j];
  }

  int mx = 0;
  for (int i = 3; i < 17; ++i)
  {
    for (int j = 3; j < 17; ++j)
    {
      int a = arr[i][j] * arr[i - 1][j] * arr[i - 2][j] * arr[i - 3][j];
      int b = arr[i][j] * arr[i + 1][j] * arr[i + 2][j] * arr[i + 3][j];
      int c = arr[i][j] * arr[i][j - 1] * arr[i][j - 2] * arr[i][j - 3];
      int d = arr[i][j] * arr[i][j + 1] * arr[i][j + 2] * arr[i][j + 3];
      int e = arr[i][j] * arr[i - 1][j - 1] * arr[i - 2][j - 2] * arr[i - 3][j - 3];
      int f = arr[i][j] * arr[i + 1][j - 1] * arr[i + 2][j - 2] * arr[i + 3][j - 3];
      int g = arr[i][j] * arr[i - 1][j + 1] * arr[i - 2][j + 2] * arr[i - 3][j + 3];
      int h = arr[i][j] * arr[i + 1][j + 1] * arr[i + 2][j + 2] * arr[i + 3][j + 3];
      mx = max(mx, max(h, max(g, max(f, max(e, max(d, max(c, max(b, a))))))));
    }
  }
  cout << mx;
}