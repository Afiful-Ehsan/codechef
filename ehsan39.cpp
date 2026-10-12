#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	if (2*a+1*b>2*x+1*y)
	{
	    cout<<"messi"<<endl;
	}
   else if(2*a+1*b<2*x+1*y)
   {
        cout<<"ronaldo"<<endl;
   }
   else
   {
        cout<<"equal"<<endl;
   }
   return 0;
}
