#include<bits/stdc++.h>

using namespace std;

int main() {
  string S;
  cin >> S;

  int sum = S.at(0) - '0';

  for(int i = 1; i < S.size(); i += 2) {
    if (S.at(i) == '+') {
      sum += S.at(i + 1) - '0';
    } else if (S.at(i) == '-') {
      sum -= S.at(i + 1) - '0';
    }
  }

  cout << sum << endl;

  return 0;
}
