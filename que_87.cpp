// Chef and Masks

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y;
        if(10*x>=y){
            cout<<"CLOTH"<<endl;
        }
        else{
            cout<<"DISPOSABLE"<<endl;
        }
    }
}
