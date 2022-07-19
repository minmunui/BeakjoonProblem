#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;

    cin >> a >> b;

    while ( a != 0 and b != 0) {
        if (a / b - (int)(a / b) == 0) {
            cout << "multiple\n";
        }
        else if ( b / a - (int)(b / a) == 0) {
            cout << "factor\n";
        }
        else {
            cout << "neither\n";
        }
        cin >> a >> b;
    }
}
