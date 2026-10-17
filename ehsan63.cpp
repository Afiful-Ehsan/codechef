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

        if(X < 300)
        {
            cout << 3000 << endl;
        }
        else
        {
            cout << X * 10 << endl;
        }
    }

    return 0;
}
