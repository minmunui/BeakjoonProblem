#include "iostream"
#include "vector"

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    
    vector<int> v;

    for (int i = 0 ; i < n ; i ++ ) {
        int input;
        cin >> input;
        v.push_back(input);
    }
}

