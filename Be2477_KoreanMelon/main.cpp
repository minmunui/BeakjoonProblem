#include <iostream>

using namespace std;

// 4231 --
bool isCW(int curDir) {
  static int lastDir = 0;
  if (lastDir == 0) {
    lastDir = curDir;
    return true;
  }

  if ( lastDir == 4 and curDir == 2 or lastDir == 2 and curDir == 3 or lastDir == 3 and curDir == 1 or lastDir == 1 and curDir == 4) {
    lastDir = curDir;
    return true;
  }
  else {
    lastDir = curDir;
    return false;
  }
}
int main() {
  int length[6] = {};
  int direction, density, longVert = 0, longHoriz = 0;
  int smallSquare = 0;
  cin >> density;

  for ( int i = 0 ; i < 6 ; i ++ ) {
    cin >> direction >> length[i];
    if ( direction <= 2 and length[i] > longHoriz) {
      longHoriz = length[i];
    }
    if ( direction > 2 and length[i] > longVert) {
      longVert = length[i];
    }
    if (!isCW(direction)) {
      smallSquare = length[i] * length[i-1];
    }
  }
  if (smallSquare == 0) {
    smallSquare = length[0] * length[5];
  }

  cout << (longVert * longHoriz - smallSquare)*density;
}
