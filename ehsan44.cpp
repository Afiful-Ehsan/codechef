#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int X;
        cin >> X;

        if (X < 3)
        {
            cout << "LIGHT" << endl;
        }
        else if (X < 7)
        {
            cout << "MODERATE" << endl;
        }
        else
        {
            cout << "HEAVY" << endl;
        }
    }

    return 0;
}
