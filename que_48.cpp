// Overspeeding Fine

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int y,x;
    cin>>y;
    for(int i=1;i<=y;i++){
        cin>>x;
        if(x<=70){
            cout<<0<<endl;
        }
        else if(x>70 && x<=100){
            cout<<500<<endl;
        }
        else if(x>=100){
            cout<<2000<<endl;
        }
    }
}
