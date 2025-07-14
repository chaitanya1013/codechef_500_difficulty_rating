// Course Registration


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,m,k;
    // n friends, m capacity register, k already entrolled
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>m>>k;
        if(m-k-n>=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
