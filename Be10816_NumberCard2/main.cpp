#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  vector<int> vec;

  int input = 0;
  for ( int i = 0 ; i < n ; i ++ ) {
    cin >> input;
    vec.push_back(input);
  }

  sort(vec.begin(), vec.end());

  int m;
  cin >> m;
  for ( int i = 0 ; i < m ; i ++ ) {
    cin >> input;
    auto lowerIter = lower_bound(vec.begin(), vec.end(), input);
    auto upperIter = lowerIter;
    if ( *lowerIter == input ) {
      while (*upperIter == *lowerIter) {
        upperIter++;
      }
      cout << upperIter - lowerIter << " ";
    } else {
      cout << 0 << " ";
    }
  }
}
