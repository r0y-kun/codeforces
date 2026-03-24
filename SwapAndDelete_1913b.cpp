#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) {
    string s; cin >> s;

    int one=0, zero=0;
    for (char c : s) {
      if (c=='0') zero++;
      else one++;
    }

    int lt=0;
    for(int i=0; i<s.size(); i++){
      if (s[i]=='0' && one>0) {
        one--; lt++;
      }else if (s[i]=='1' && zero>0) {
        zero--; lt++;
      }else{
        break;
      }
    }
    cout << s.size()-lt << "\n";
  }
  return 0;
}
