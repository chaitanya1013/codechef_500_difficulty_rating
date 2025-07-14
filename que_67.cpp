// Six Friends

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if(3*x>=2*y)
	    {
	        cout<<2*y<<endl;
	    }
	    else if(3*x<2*y)
	    {
	        cout<<3*x<<endl;
	        
	    }
	}
	return 0;
}