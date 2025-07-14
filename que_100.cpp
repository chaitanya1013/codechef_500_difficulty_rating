// Pending Assignments

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y,z;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y>>z;
        int c=x*y;
        int d=24*60*z;
        if(c<=d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
