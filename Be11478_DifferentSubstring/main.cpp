#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  string str;
  cin >> str;

  int length = str.size();

  vector<string> vec;

  for( int i = 1 ; i <= length; i ++ ) {
    for ( int j = 0 ; j <= length - i ; j ++ ) {
      vec.push_back(str.substr(j, i));
    }
  }
  sort(vec.begin(), vec.end());

  cout << unique(vec.begin(), vec.end()) - vec.begin();
  return 0;
}
