#include <iostream>
using namespace std;
using ll = long long;
int main() {
  int n, s = 0;
  cin >> n;
  for (int i = 1; i < n + 1; ++i) {
    s += i;
  }
  for (int i = 1; i < n; ++i) {
    int x;
    cin >> x;
    s -= x;
  }

  cout << s << endl;
  return 0;
}
