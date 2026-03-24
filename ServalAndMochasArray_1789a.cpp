#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n]; bool ok=true;
    for (auto &x : a){
      cin >> x;
      if (x>n) ok=false;
    }
    if (ok) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}
