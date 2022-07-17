#include <iostream>
#include <cmath>

using namespace std;

double getDistance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

bool isInGround(int w, int h, int x, int y, int px, int py) {
    return ( getDistance(x, y+h/2, px, py) <= h/2 or getDistance(x+w, y+h/2, px, py) <= h/2 or px >= x and px <= x+w and py >= y and py <= y + h);
}

int main() {
    int w, h, x, y, p;
    cin >> w >> h >> x >> y >> p;
    int inGround = 0;
    for ( int i = 0 ; i < p ; i ++ ) {
        int px, py;
        cin >> px >> py;
        if (isInGround(w, h, x, y, px, py)) {
            inGround++;
        }
    }
    cout << inGround << endl;
}
