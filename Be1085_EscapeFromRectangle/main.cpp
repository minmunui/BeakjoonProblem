#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int x, y, w, h;

  cin >> x >> y >> w >> h;

  vector<int> d;

  d.push_back(x);
  d.push_back(y);
  d.push_back(h-y);
  d.push_back(w-x);

  cout << *min_element(d.begin(), d.end());

  return 0;
}
