#include "temp.hpp"


int main()
{
  vector<int> arr(27);
  for (int i = 0; i < 27; ++i) arr[i] = i;
  ifstream file("names.txt");
  string txt;
  vector<string> str{""};
  while(getline(file, txt, ','))
    str.emplace_back(txt.substr(1, txt.size() - 2));
  sort(str.begin(), str.end());
  ll sum = 0;
  for (int i = 1, size = str.size(); i < size; ++i)
  {
    int s = 0;
    for (int j = 0, len = str[i].size(); j < len; ++j)
      s += str[i][j] - 64;
    sum += s * i;
  }
  cout << sum << endl;
}