// Passes for Fair

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int y,x,z;
    cin>>y;
    for(int i=1;i<=y;i++){
        cin>>x>>z;
        if(x<z){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
