
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int X, Y;
        cin >> X >> Y;

        if (Y > X) {
            cout << "PROFIT" << endl;
        } else if (Y < X) {
            cout << "LOSS" << endl;
        } else {
            cout << "NEUTRAL" << endl;
        }
    }

    return 0;
}
