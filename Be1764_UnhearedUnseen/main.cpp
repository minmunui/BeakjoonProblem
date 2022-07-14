#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  string input;

  vector<string> unheared;

  for ( int i = 0 ; i < n ; i ++ ) {
    cin >> input;
    unheared.push_back(input);
  }

  sort(unheared.begin(), unheared.end());

  vector<string> vecUnseenUnheared;

  for ( int i = 0 ; i < m ; i ++ ) {
    cin >> input;
    if (input == *lower_bound(unheared.begin(), unheared.end(), input)) {
      vecUnseenUnheared.push_back(input);
    }
  }

  sort(vecUnseenUnheared.begin(), vecUnseenUnheared.end());

  cout << vecUnseenUnheared.size() << endl;

  for ( const string& str : vecUnseenUnheared ) {
    cout << str << "\n";
  }

  return 0;
}