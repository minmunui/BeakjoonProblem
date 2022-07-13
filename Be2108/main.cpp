#include "iostream"
#include "vector"
#include <math.h>
#include "algorithm"

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0 ; i < n ; i ++ ) {
        int input;
        cin >> input;
        vec.push_back(input);
    }
    sort_heap(vec.begin(), vec.end());
    for ( int i : vec ) {
        cout << i << endl;
    }
}