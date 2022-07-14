#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n = 0;
  cin >> n;

  vector<int> vec;
  int input = 0;


  for ( int i = 0 ; i < n ; i ++ ){
    cin >> input;
    vec.push_back(input);
  }

  sort(vec.begin(), vec.end());

  vec.erase(unique(vec.begin(), vec.end()), vec.end());

  int m = 0;
  cin >> m;
  for ( int i = 0 ; i < m ; i ++ ) {
    cin >> input;
    if ( input == *lower_bound(vec.begin(), vec.end(), input) ) {
      cout << 1 << " ";
    }
    else {
      cout << 0 << " ";
    }
  }
}
