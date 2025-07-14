// Spice Level

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x;
        if(x<4){
            cout<<"MILD"<<endl;
        }
        if(x>=4 && x<7){
            cout<<"MEDIUM"<<endl;
        }
        if(x>=7){
            cout<<"HOT"<<endl;
        }
    }
}
