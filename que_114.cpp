// Netflix

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,a,x,y,z;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>x>>y>>z;
        if((a + x >= z) || (a + y >= z) || (x + y >= z)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
