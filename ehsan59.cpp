
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        cout << X - Y + Z << endl;
    }

    return 0;
}
