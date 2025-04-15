#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int sum = 0;

    // Make sure X is the smaller value
    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    for (int i = X + 1; i < Y; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}
