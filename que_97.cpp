// First and Last Digit


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,ld,fd;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        ld=n%10;
        fd=n;
    
        while(fd>=10){
            fd/=10;
        }
        cout<<fd+ld<<endl;
    }
    
}
