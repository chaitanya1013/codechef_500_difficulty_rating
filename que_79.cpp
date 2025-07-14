// Volume Control

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y;
        if(x>y){
            cout<<x-y<<endl;
        }
        else{
            cout<<y-x<<endl;
        }
    }
}
