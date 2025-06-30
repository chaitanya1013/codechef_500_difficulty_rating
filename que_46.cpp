// Rain in Chefland

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int y,x;
    cin>>y;
    for(int i=1;i<=y;i++){
        cin>>x;
        if(x<3){
            cout<<"LIGHT"<<endl;
        }
        else if(x>=3 && x<7){
            cout<<"MODERATE"<<endl;
        }
        else if(x>=7){
            cout<<"HEAVY"<<endl;
        }
    }
}
