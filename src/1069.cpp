#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  string s;
  cin >> s;
  int m = 1, c = 1;
  for (size_t i = 1; i < s.size(); i++) {
    if (s[i] != s[i - 1])
      c = 0;
    c++;
    m = max(m, c);
  }

  cout << m;

  return 0;
}
