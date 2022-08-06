#include <iostream>

using namespace std;

int ww[21][21][21] = {0};


int w(int a, int b, int c) {

  if (a <= 0 or b <= 0 or c <= 0)
    return 1;

  if (a > 20 or b > 20 or c > 20)
    return ww[20][20][20];

  if (a < b and b < c)
    return ww[a][b][c-1] + ww[a][b-1][c-1] - ww[a][b-1][c];

  else {
    return ww[a-1][b][c] + ww[a-1][b-1][c] + ww[a-1][b][c-1] - ww[a-1][b-1][c-1];
  }

}

int main() {
  for ( int i = 0 ; i <= 20 ; i ++ ) {
    for ( int j = 0 ; j <= 20 ; j ++ ) {
      ww[0][i][j] = ww[i][0][j] = ww[i][j][0] = 1;
    }
  }
  for ( int i = 1 ; i < 20 ; i ++ ) {

    for ( int j = 1 ; j < i ; j ++ ) {

      for ( int k = 1; k < j ; k ++ ) {
        ww[i][j][k] = w(i, j, k);
        printf("w(%d, %d, %d) = %d\n", i, j, k, ww[i][j][k]);
      }
      ww[i][i][j] = w(i, i, j);
      ww[i][j][i] = w(i, j ,i);
      ww[j][i][i] = w(j, i, i);
    }
    ww[i][i][i] = w(i, i, i);
  }
}
