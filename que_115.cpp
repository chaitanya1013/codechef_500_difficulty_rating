// Chef and Gym

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y,z;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y>>z;
        if(x>z){
            cout<<0<<endl;
        }
        else if(x+y>z){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}
