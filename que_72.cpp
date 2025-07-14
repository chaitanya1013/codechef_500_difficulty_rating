// Reach Home

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y;
    // Chef can travel up to 5 kilometres on 1 litre of fuel on his motorcycle.
    // x=filled fuel y=km
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y;
        if(5*x>=y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
