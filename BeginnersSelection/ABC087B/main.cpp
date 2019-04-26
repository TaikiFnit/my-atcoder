#include<bits/stdc++.h>

using namespace std;

int main() {
  int A, B, C, X, count = 0;

  cin >> A >> B >> C >> X;

  for (int a = A; a >= 0; a--) {
    for (int b = B; b >= 0; b--) {
      for (int c = C; c >= 0; c--) {
        if (X == a*500+b*100+c*50) {
          count++;
        }
      }
    }
  }

  cout << count << endl;

  return 0;
}

