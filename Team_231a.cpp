#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  int ans=0;
  while (n--) {
    int x, y, z; cin >> x >> y >> z;
    int cnt=x+y+z;
    if (cnt>1) ans++;
  }
  cout << ans << endl;
  return 0;
}
