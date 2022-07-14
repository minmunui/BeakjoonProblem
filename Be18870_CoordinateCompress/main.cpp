#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n = 0;
  cin >> n;

  int input = 0;
  vector<int> vecOriginal;

  for (int i = 0 ; i < n ; i ++ ) {
    cin >> input;
    vecOriginal.push_back(input);

  }

  vector<int> vecSorted(vecOriginal);
  sort(vecSorted.begin(), vecSorted.end());

  vecSorted.erase(unique(vecSorted.begin(), vecSorted.end()), vecSorted.end());

  for (int & iter : vecOriginal) {
    auto it = lower_bound(vecSorted.begin(), vecSorted.end(), iter);
    cout << it - vecSorted.begin() << " ";
  }
}
