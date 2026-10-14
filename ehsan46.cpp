#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++)
    {
        int X;
        cin >> X;

        if(X <= 70)
        {
            cout << 0 << endl;
        }
        else if(X <= 100)
        {
            cout << 500 << endl;
        }
        else
        {
            cout << 2000 << endl;
        }
    }

    return 0;
}
