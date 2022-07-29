#include <iostream>

using namespace std;

int solutions = 0;
int N = 0;
const int MAX = 15;

bool chessBoard[MAX][MAX] = {false};

void printChess() {
  for ( int j = 1 ; j <= N ; j ++ ) {
    for ( int k = 1 ; k <= N ; k ++ ) {
      cout << chessBoard[j][k] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

bool isPlaceable(int x, int y) { // this function detect only upper location from parameter coordinate
  for ( int i = 1 ; i <= x ; i ++ ) {
    if ( chessBoard[i][y] ) {
      return false;
    }
    int distance = x - i;
    if ( y - distance > 0 ) {
      if ( chessBoard[i][y - distance] ) {
        return false;
      }
    }
    if ( y + distance <= N ) {
      if ( chessBoard[i][y + distance] ) {
        return false;
      }
    }
  }
  return true;
}

void placeQueen(int phase) {

  if ( phase == N ) {
    for ( int i = 1 ; i <= N ; i++ ) {
      if (isPlaceable(phase, i)) {
        solutions ++;
//        printChess();
        return;
      }
    }
  }
  else {
    for ( int i = 1 ; i <= N ; i ++ ) {
      if ( isPlaceable(phase, i) ) {  // placeable check
        chessBoard[phase][i] = true;  // before deeper place queen
        placeQueen(phase + 1);
        chessBoard[phase][i] = false; // after deeper displace queen
      }
    }
  }
}

int main() {
  cin >> N;
  placeQueen(1);
  cout << solutions;
}
