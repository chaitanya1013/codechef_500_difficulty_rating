// Profit Increment

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y;
        cout<<(x*1.1)-(x-y)<<endl;
    }
}
