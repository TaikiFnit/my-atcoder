#include<bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;

  int max_index = 0, min_index = 0, max_gcd = 0, min_gcd = 1;

  vector<int> A(N);
  for(int i = 0; i < N; i++) {
    cin >> A.at(i);
    min_gcd = max(A.at(i), min_gcd);
  }

  for(int i = 0; i < N; i++) {
    for(int j = i + 1; j < N; j++) {
      int gcd = __gcd(A.at(i), A.at(j));
      max_gcd = max(gcd, max_gcd);
      min_gcd = min(gcd, min_gcd);

      if (min_gcd == gcd) {
        min_index = i;
      }

      if(max_gcd == gcd) {
        max_index = i;
      }
    }
  }

  cout << max_gcd << endl;

  return 0;
}
