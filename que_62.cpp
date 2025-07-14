// Chef gives Party

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y,z;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y>>z;
        if((x*y)<=z){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
