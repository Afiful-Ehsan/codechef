
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++)
    {
        int A, B, C;
        cin >> A >> B >> C;

        if(A > B && A > C)
        {
            cout << "Alice" << endl;
        }
        else if(B > A && B > C)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Charlie" << endl;
        }
    }

    return 0;
}
