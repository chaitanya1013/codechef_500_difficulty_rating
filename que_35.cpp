// Bull or Bear

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y;
        if(x<y){
            cout<<"PROFIT"<<endl;
        }
        if(x>y){
            cout<<"LOSS"<<endl;
        }
        if(x==y){
            cout<<"NEUTRAL"<<endl;
        }
    }
}
