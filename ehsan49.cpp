#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++)
    {
        int N, X, Y;
        cin >> N >> X >> Y;

        if(X * Y >= N)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
