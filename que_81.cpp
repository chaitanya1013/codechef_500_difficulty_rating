// Is it hot or cold

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x;
        if(x<=20){
            cout<<"COLD"<<endl;
        }
        else{
            cout<<"HOT"<<endl;
        }
    }
}
