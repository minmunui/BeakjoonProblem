#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int x, y;

  vector<int> vx;
  vector<int> vy;

  for ( int i = 0 ; i < 3 ; i ++ ) {
    cin >> x >> y;

    vx.push_back(x);
    vy.push_back(y);
  }

  for ( int &ele : vx ) {
    if ( count(vx.begin(), vx.end(), ele) == 1 ) {
      cout << ele << " ";
    }
  }

  for ( int &ele : vy ) {
    if ( count(vy.begin(), vy.end(), ele) == 1 ) {
      cout << ele << " ";
    }
  }
}
