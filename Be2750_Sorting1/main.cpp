#include "iostream"
#include "vector"
#include <queue>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0 ; i < n ; i ++ ) {
        int input;
        cin >> input;
        pq.push(input);
    }

    while(!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }
}