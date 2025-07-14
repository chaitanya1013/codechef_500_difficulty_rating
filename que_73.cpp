// Donation Rewards

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x;
        if(x<=3){
            cout<<"BRONZE"<<endl;
        }
        if(x>3 && x<=6){
            cout<<"SILVER"<<endl;
        }
        if(x>6){
            cout<<"GOLD"<<endl;
        }
    }
}
