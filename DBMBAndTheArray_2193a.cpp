#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) {
    int n, s, x; cin >> n >> s >> x;

    int cnt=0;
    while (n--) {
      int z; cin >> z;
      cnt += z;
    }

    while (cnt<s) {
      cnt += x;
    }

    if (cnt==s) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}
