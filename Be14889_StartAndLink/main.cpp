#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int n = 0;
int min_gap = 0;
bool is_first_flag = true;
bool visited[21] = {false};

int table[21][21] = {0};

vector<int> team_start;

int get_gap() {
  vector<int> team_link;
  for ( int i = 1 ; i <= n ; i ++ ) {
    if ( !visited[i] )
      team_link.push_back(i);
  }
  int result_start = 0;
  int result_link = 0;
  for ( int i = 0 ; i < team_start.size() ; i ++ ) {
    for ( int j = 0 ; j < team_start.size() ; j ++ ) {
      result_start += table[team_start[i]][team_start[j]];
      result_link += table[team_link[i]][team_link[j]];
    }
  }
//  for (int i : team_start) {
//    cout << i << " ";
//  }
//  cout << endl;
//  for (int i : team_link) {
//    cout << i << " ";
//  }
//  cout << endl;
  return abs(result_start-result_link);
}

void make_team(int phase) {
  if ( phase == n/2 ) {
    int result_gap = get_gap();
    if ( is_first_flag ) {
      is_first_flag = false;
      min_gap = result_gap;
    }
    else {
      if ( min_gap > result_gap ) {
        min_gap = result_gap;
      }
    }
  }
  else {
    int t = team_start[phase-1];
    for ( int i = 1 ; i <= n ; i ++ ) {
      if ( !visited[i] and i > t ) {
        visited[i] = true;
        team_start.push_back(i);
        make_team(phase + 1);
        visited[i] = false;
        team_start.pop_back();
      }
    }
  }
}

int main() {
  cin >> n;

  for ( int i = 1 ; i <= n ; i ++ ) {
    for ( int j = 1 ; j <= n ; j ++ ) {
      cin >> table[i][j];
    }
  }

  team_start.push_back(1);
  visited[1] = true;
  make_team(1);

  cout << min_gap;

}
