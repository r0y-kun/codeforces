#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) {
    string s; cin >> s;

    int srt= s.find('1');
    int end= s.rfind('1');

    int cnt=0;
    for (int i = srt; i < end+1; i++) {
      if (s[i]=='0') cnt++;
    }

    cout << cnt << endl;
  }
  return 0;
}
