#include <iostream>
#include <vector>

enum Operator { PLUS, MINUS, MULTIPLIER, DIVIDE };

using namespace std;

vector<int> vec_operand;
vector<int> vec_operator;

int n_operator[4];

int min_result = 0;
int max_result = 0;
bool isFirst = false;

int compute(const vector<int>& v_operand, const vector<int>& v_operator) {
  int result = v_operand[0];
  for ( int i = 0 ; i < v_operator.size() ; i ++ ) {
    switch (v_operator[i]) {
      case PLUS:
        result += v_operand[i+1];
        break;
      case MINUS:
        result -= v_operand[i+1];
        break;
      case MULTIPLIER:
        result *= v_operand[i+1];
        break;
      case DIVIDE:
        result /= v_operand[i+1];
        break;
    }
  }
  return result;
}

void find_min_max(int phase) {
  if ( phase == vec_operand.size()-1 ) {
    int compute_result = compute(vec_operand, vec_operator);
    if ( isFirst ) {
      min_result = compute_result;
      max_result = min_result;
      isFirst = false;
    }
    else if ( min_result > compute_result ) {
      min_result = compute_result;
    }
    else if ( max_result < compute_result ) {
      max_result = compute_result;
    }
  }
  else {
    // go deeper
    find_min_max(phase + 1);
    // init status
  }
}

int main() {
  int n;
  cin >> n;

  int input;

  for ( int i = 0 ; i < n ; i ++ ) {
    cin >> input;
    vec_operand.push_back(input);
  }

  for ( int i = 0 ; i < 4 ; i ++ ) {
    cin >> n_operator[i];
  }



}
