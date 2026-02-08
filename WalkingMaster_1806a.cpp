#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long t; cin >> t;
  while (t--) {
    long long a, b, c, d; cin >> a >> b >> c >> d;

    long long cnt=0;
    while(b!=d){
      a++;
      b++;
      cnt++;
    }
    
    if (d<b) cout << -1 << endl;
    else {
      while (a!=c){
        a--;
        cnt++;
      }
      cout << cnt << endl;
    }
  }
  return 0;
}
