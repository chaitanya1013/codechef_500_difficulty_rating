// Broken Phone

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y;
        if(x<y){
            cout<<"REPAIR"<<endl;
        }
        else if(x>y){
            cout<<"NEW PHONE"<<endl;
        }
        else if(x==y){
            cout<<"ANY"<<endl;
        }
    }
}
