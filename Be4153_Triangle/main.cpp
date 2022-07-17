#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max(vector<int> vec) {
  int max = vec[0];
  for (int ele : vec) {
    if (max<ele) {
      max = ele;
    }
  }
  return max;
}

int main() {
  vector<int> arr(3);

  cin >> arr[0] >> arr[1] >> arr[2];

  int sum = 0;
  while ( count(arr.begin(), arr.end(), 0) != 3) {
    int m = max(arr);
    for ( int ele : arr) {
      if ( m != ele) {
        sum += ele * ele;
      }
    }
    if ( sum == m * m ) {
      cout << "right" << "\n";
    }
    else {
      cout << "wrong" << "\n";
    }
    sum = 0;
    cin >> arr[0] >> arr[1] >> arr[2];
  }
}