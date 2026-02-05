#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    int cnt=0, ans=0;
    for(int i=0; i<n; i++){
      if (v[i]==0) cnt++;
      else cnt=0;

      if (cnt>ans) ans=cnt;
    }

    cout << ans << endl;
  }
  return 0;
}
