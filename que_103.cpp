// Codechef Airlines


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y,z;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y>>z;
        if((x*10)>=y){
            cout<<y*z<<endl;
        }
        else{
            cout<<x*10*z<<endl;
        }
    }
}

    