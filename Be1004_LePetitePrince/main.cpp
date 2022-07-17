#include <iostream>

using namespace std;

bool isInCircle(int px, int py, int cx, int cy, int r) {
  return (px - cx) * (px - cx) + (py - cy) * (py - cy) < r * r;
}

int main() {
  int testCase = 0;
  cin >> testCase;

  for ( int test = 0 ; test < 0 ; test ++ ) {
    int across = 0;
    int ax, ay, dx, dy;
    cin >> ax >> ay >> dx >> dy;
    int no;
    cin >> no;

    for ( int o = 0 ; o < no ; o ++ ) {
      int ox, oy, r;
      cin >> ox >> oy >> r;

      if ( isInCircle(ax, ay, ox, oy, r) xor isInCircle(dx, dy, ox, oy, r) ) {
        across ++ ;
      }
    }
    cout << across << "\n";
  }
}
