#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    int val=1, ans=0;
    vector<int> a(n);
    for(auto &x : a) {
      cin >> x;
      if (x%k==0) val=0;
    }

    if (val!=0){
      for (int i=0; i<n; i++){
        if (a[i]>k) {
          
        }
      }
    }
  }
  return 0;
}
