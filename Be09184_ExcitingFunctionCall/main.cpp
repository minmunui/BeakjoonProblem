#include <iostream>

using namespace std;

int ww[21][21][21] = {0};


int w(int a, int b, int c) {
//    cout << "w(" << a << ", " << b << ", " << c << ")\n";
  if (a <= 0 or b <= 0 or c <= 0)
    return 1;

  if (a > 20 or b > 20 or c > 20)
    return w(20, 20, 20);


  if ( ww[a][b][c] ) {
      return ww[a][b][c];
  }
  else {
      if (a < b and b < c) {
          ww[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
          return ww[a][b][c];
  }
      else {
          ww[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
          return ww[a][b][c];
      }
  }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;

    while (!(a == -1 and b == -1 and c == -1)) {

        cout << "w(" << a << ", " << b << ", " << c << ") = ";
        cout << w(a, b, c) << "\n";
        cin >> a >> b >> c;
    }
}
