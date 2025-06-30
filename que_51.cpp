// Read Pages

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,x,y;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>x>>y;
        if((x*y)>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
