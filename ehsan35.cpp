
#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T; 

for(int i=0;i<T;i++) 
{
    int X, Y;
    cin >> X >> Y;

    if (X > Y) {
        cout << X - Y << endl;
    } 
    else {
        cout << 0 << endl;
    }
}

return 0;

}
