// October Marathon

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x;
    cin>>x;
    if(x<3){
        cout<<"GOLD"<<endl;
    }
    else if(x>=3 && x<=5){
        cout<<"SILVER"<<endl;
    }
    else if(x>=6){
        cout<<"BRONZE"<<endl;
    }
}
