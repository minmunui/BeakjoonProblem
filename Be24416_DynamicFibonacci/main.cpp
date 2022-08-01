#include <iostream>

using namespace std;

int recursive = 0;
int dynamic = 0;

int fib(int n) {
  if ( n == 1 or n == 2 ) {
    recursive++;
    return 1;
  }
  else
    return ( fib(n-1) + fib(n-2));
}

int arr[41] = {0};

int fibonacci(int n) {
  arr[1] = arr[2] = 1;
  for ( int i = 3 ; i <= n ; i ++ ) {
    dynamic++;
    arr[i] = arr[i-1] + arr[i-2];
  }
  return arr[n];
}

int main() {
  int n = 0;
  cin >> n;

  fib(n);
  fibonacci(n);

  cout << recursive << " " << dynamic;
}

