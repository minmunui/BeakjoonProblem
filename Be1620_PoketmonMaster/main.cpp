#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Poketmon {
  string name;
  int id;
 public:

  Poketmon(const string &name, int id) : name(name), id(id) {}
  Poketmon() {}

  const string &GetName() const {
    return name;
  }
  int GetId() const {
    return id;
  }


};

bool compareByID(const Poketmon& p1, const Poketmon& p2) {
  return (p1.GetId() > p2.GetId());
}

bool compareByName(const Poketmon& p1, const Poketmon& p2) {
  return (p1.GetName() > p2.GetName());
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n = 0;
  cin >> n;

  int m = 0;
  cin >> m;

  vector<Poketmon> vecNameSort;
  string input;


  for ( int i = 1 ; i <= n ; i ++ ){
    cin >> input;
    vecNameSort.emplace_back(input, i);
  }

  vector<Poketmon> vecIDSort(vecNameSort);

  sort(vecNameSort.begin(), vecNameSort.end(), compareByName);
  sort(vecIDSort.begin(), vecIDSort.end(), compareByID);



  for ( int i = 0 ; i < m ; i ++ ) {
    cin >> input;
    try {
      int num = stoi(input);
      cout << lower_bound(vecIDSort.begin(), vecIDSort.end(), Poketmon("none", num), compareByID)->GetName() << "\n";
    } catch (exception &e) {
      cout << lower_bound(vecNameSort.begin(), vecNameSort.end(), Poketmon(input, 0), compareByName)->GetId() << "\n";
    }
  }
}
