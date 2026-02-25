#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long t; cin >> t;
  while (t--) {
    int a, b, c; cin >> a >> b >> c;

    int cf= ceil(c/2), cs= c-cf;
    int ac = a + cs, bc = b + cf;

    if (bc<ac) cout << "First\n";
    else cout << "Second\n";
  }
  return 0;
}
