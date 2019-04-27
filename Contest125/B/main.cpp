#include<bits/stdc++.h>

using namespace std;

int main() {
  int N, sum_v = 0, sum_c = 0;

  cin >> N;

  vector<int> V(N), C(N);

  for(int i = 0; i < N; i++) {
    cin >> V.at(i);
  }

  for(int i = 0; i < N; i++) {
    cin >> C.at(i);
  }

  for(int i = 0; i < N; i++) {
    if(V.at(i) - C.at(i) > 0) {
      sum_v += V.at(i);
      sum_c += C.at(i);
    }
  }

  cout << sum_v - sum_c << endl;

  return 0;
}
