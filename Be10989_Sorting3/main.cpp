#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int arr[10001] = {0};
    int input;

    for ( int i = 0 ; i < n ; i ++ ) {
        cin >> input;
        arr[input] += 1;
    }

    for ( int i = 1 ; i < 10001 ; i ++ ) {
        for ( int j = 0 ; j < arr[i] ; j ++ ) {
            cout << i << '\n';  // endl; 보다 '\n'이 빠르다
        }
    }
}
