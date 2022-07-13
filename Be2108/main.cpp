#include "iostream"
#include "vector"
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;

    priority_queue<int> pq;
    int arr[n];

    for (char i : n) {
        pq.push(int(i) - int('0'));
    }

    while(!pq.empty()) {
        cout << pq.top();
        pq.pop();
    }
}