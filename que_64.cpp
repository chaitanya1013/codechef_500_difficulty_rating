// Interior Design


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,a,b,c,d;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b>>c>>d;
        if((a+b)<=(c+d)){
            cout<<a+b<<endl;
        }
        else{
            cout<<c+d<<endl;
        }
    }
    
}
