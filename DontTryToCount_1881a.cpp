#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    string x; cin >> x;
    string s; cin >> s;

    int cnt=0; bool ok=false;
    while (cnt<=30) {
      if (x.find(s) != string::npos) { ok = true; break;}
      x = x + x;
      cnt++;
    }

    if (ok) cout << cnt << endl;
    else cout << -1 << endl;
  }
  return 0;
}
