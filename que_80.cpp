// ATM

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x;
    float y;
    cin>>x>>y;
    if(x%5==0){
        if(x+0.50<=y){
        cout<<y-x-0.50<<endl;
        }
        else{
            cout<<y<<endl;
        }
    }
    else{
        cout<<y<<endl;
    }
}
