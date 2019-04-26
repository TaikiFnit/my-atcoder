#include<bits/stdc++.h>
using namespace std;

#define N 5

int main() {
  vector<int> vec(N);

  for(int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }

  for(int i = 0; i < N; i++) {
    cout << vec.at(i) << endl;

  }

  return 0;

}
