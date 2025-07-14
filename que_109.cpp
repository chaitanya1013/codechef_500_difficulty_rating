// Bucket and Water Flow

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y,z,a;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y>>z>>a;
        int b=x+(z*a);
        if(b>y){
           cout<<"OVERFLOW"<<endl; 
        }
        else if(b<y){
            cout<<"UNFILLED"<<endl; 
        }
        else if(b=y){
            cout<<"FILLED"<<endl; 
        }
        
    }
}
