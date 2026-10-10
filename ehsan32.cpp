
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        int A, B, C;
        cin >> A >> B >> C;

        if (A > B && A < C || A < B && A > C) {
            cout << A << endl;
        } else if (B > A && B < C || B < A && B > C) {
            cout << B << endl;
        } else {
            cout << C << endl;
        }
    }

    return 0;
}
