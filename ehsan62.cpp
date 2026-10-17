#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++)
    {
        int X1, Y1, X2, Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;

        int cost1 = X1 + Y1;
        int cost2 = X2 + Y2;

        if(cost1 < cost2)
        {
            cout << cost1 << endl;
        }
        else
        {
            cout << cost2 << endl;
        }
    }

    return 0;
}
