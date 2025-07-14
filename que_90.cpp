// TV Discount


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,a,b,c,d;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b>>c>>d;
        if((a-c)<(b-d)){
            cout<<"FIRST"<<endl;
        }
        else if((a-c)>(b-d)){
            cout<<"SECOND"<<endl;
        }
        else if((a-c)==(b-d)){
            cout<<"ANY"<<endl;
        }
    }
}
