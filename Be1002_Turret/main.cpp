#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double getDistance(int x1, int y1, int x2, int y2) {
    return sqrt( pow( x1 - x2, 2 ) + pow( y1 - y2, 2) );
}

int main() {
    int testCase;
    cin >> testCase;

    vector<int> ex;

    for ( int test = 0 ; test < testCase ; test ++ ) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double d = getDistance(x1, y1, x2, y2);
        try
        {
            if (d == r1 + r2 or d == abs(r1 - r2)) {
                cout << 1 << "\n";
            } else if (d > r1 + r2 or d < abs(r1 - r2)) {
                cout << 0 << "\n";
            } else if (d < r1 + r2) {
                cout << 2 << "\n";
            } else {
                throw (to_string(x1) + to_string(y1) + to_string(r1) + to_string(x2) + to_string(y2) + to_string(r2));
            }
        } catch (string exception) {
            cout << exception << endl;
        }
    }
}