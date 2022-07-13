#include <iostream>
#include "vector"
#include <algorithm>
#include <queue>
using namespace std;

template <typename T>
class Point {
    T x;
    T y;
public:
    Point(T x, T y) : x(x), y(y) {}

    bool operator<(const Point &rhs) const {
        if (y > rhs.y)
            return true;
        if (rhs.y > y)
            return false;
        return x > rhs.x;
    }

    bool operator>(const Point &rhs) const {
        return rhs < *this;
    }

    bool operator<=(const Point &rhs) const {
        return !(rhs < *this);
    }

    bool operator>=(const Point &rhs) const {
        return !(*this < rhs);
    }

    void print() const {
        cout << x << " " << y << "\n";
    }
};

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n;

    cin >> n;

    priority_queue<Point<int>> pq;

    int inputX, inputY;
    for (int i = 0 ; i < n ; i ++ ) {
        cin >> inputX >> inputY;
        pq.push(Point(inputX, inputY));
    }

    for (int i = 0 ; i < n ; i ++ ){
        pq.top().print();
        pq.pop();
    }
}