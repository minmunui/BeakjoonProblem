#include <iostream>

using namespace std;



int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int T = 0;
  cin >> T;


  int N = 0;
  for ( int i = 0 ; i < T ; i ++ ) {
    cin >> N;
    if ( N % 2 == 0 ) { // even
      cout << "cubelover" << "\n";
    }
    else { // odd
      cout << "koosaga" << "\n";
    }
  }
}