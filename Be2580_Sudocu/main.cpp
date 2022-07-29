#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Point {
 public:
  int x = 0;
  int y = 0;

  Point() {}
  Point(int x, int y) : x(x), y(y) {}
};

int table[10][10];
int blank = 0;
bool found = false;

vector<Point> vec;

void printTable() {
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      cout << table[i][j] << " ";
    }
    cout << endl;
  }
}

int findOneFromThree(int x) {
  if ( 0 < x and x <= 3 ) {
    return 1;
  }
  else if ( 3 < x and x <= 6 ) {
    return 2;
  }
  else if ( 6 < x and x <= 9 ) {
    return 3;
  }
  else { return -1; }
}

bool check_small_box(int n, int x, int y) {
  int ver_range_begin = (findOneFromThree(x) - 1) * 3 + 1;
  int hor_range_begin = (findOneFromThree(y) - 1) * 3 + 1;
  for ( int i = ver_range_begin ; i < ver_range_begin + 3 ; i ++ ) {
    for ( int j = hor_range_begin ; j < hor_range_begin + 3; j ++ ) {
      if ( table[i][j] == n )
        return false;
    }
  }
  return true;
}

bool isPlaceable(int n, int x, int y) {
  for ( int i = 1 ; i <= 9 ; i ++ ) {  //check col row
    if ( table[x][i] == n ) {
      return false;
    }
    if ( table[i][y] == n ) {
      return false;
    }
  }return check_small_box(n, x, y);
}

void printVector(const vector<int>& vector1) {
  for ( int i : vector1) {
    cout << i << " ";
  }
  cout << endl;
}

void solve_sudocu(int cnt) {
  if (cnt == blank) {
    printTable();
    found = true;
    exit(0);
  }
  else {
    Point cursor = vec[cnt];
    vector<int> candidate_vector;
    for ( int i = 1 ; i <= 9 ; i++ ) {
      if ( isPlaceable(i, cursor.x, cursor.y) ) {
        candidate_vector.push_back(i);
      }
    }
//    printVector(candidate_vector);
    while ( !candidate_vector.empty() ) {
      int candidate = candidate_vector[candidate_vector.size()-1];
      candidate_vector.pop_back();
      table[cursor.x][cursor.y] = candidate;
//      printTable();
//      cout << endl;
      solve_sudocu(cnt + 1);
      table[cursor.x][cursor.y] = 0;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int input=0;

  for ( int i = 1 ; i <= 9 ; i ++ ) {
    for ( int j = 1 ; j <= 9 ; j ++ ) {
      cin >> input;
      if ( input == 0 ) {
        vec.emplace_back(i, j);
        blank ++;
      }
      table[i][j] = input;
    }
  }

  solve_sudocu(0);

}