#include <iostream>

// this solution is indicate a location you cannot place queen
// but I found weak point that during backtracking progress, locations is initiated unintentionally...

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

void foo(int phase) {

  if ( phase == N ) {
    for ( int i = 1 ; i <= N ; i++ ) {
      if (!chessBoard[phase][i]) {
        solutions ++;
        return;
      }
    }
  }
  else {
    for ( int i = 1 ; i <= N ; i ++ ) {
      if ( !chessBoard[phase][i] ) {
        for ( int j = phase + 1 ; j <= N ; j ++ ) { // before deeper
          chessBoard[j][i] = true;
          int distance = j - phase;
          if ( i - distance > 0 ) {
            chessBoard[j][i-distance] = true;
          }
          if ( i + distance <= N ) {
            chessBoard[j][i+distance] = true;
          }
        }
        printChess();
        foo(phase + 1);
        for ( int j = phase + 1 ; j <= N ; j ++ ) { // after deeper
          for ( int k = 1 ; k <= N ; k ++ ) {
            chessBoard[j][k] = false;
          }
        }
      }
    }
  }
}

int main() {
  cin >> N;
  foo(1);
  cout << solutions;
}
