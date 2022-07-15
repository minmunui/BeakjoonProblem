#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int input;

  vector<int> vec;

  for ( int i = 0 ; i < n ; i ++ ) {
    cin >> input;
    vec.push_back(input);
  }

  sort(vec.begin(), vec.end());
  int result = n + m;

  for ( int i = 0 ; i < m ; i ++ ) {
    cin >> input;
    if (input == *lower_bound(vec.begin(), vec.end(), input)) {
      result -= 2;
    }
  }

  cout << result;

  return 0;
}