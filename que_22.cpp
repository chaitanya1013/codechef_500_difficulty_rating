// Best of Two

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y;
        if(x>y){
            cout<<x<<endl;
        }
        else{
            cout<<y<<endl;
        }
    }
}
