// Four Tickets


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x;
        y=4*x;
        if(y<=1000){
            cout<<"YES"<<endl;
        }
        if(y>1000){
            cout<<"NO"<<endl;
        }
    }
}
