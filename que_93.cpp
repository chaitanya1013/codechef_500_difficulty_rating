// Sum of Digits

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,ld,sum;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x;
        sum=0;
        while(x>0){
            ld= x%10;
            x=x/10;
            sum=sum+ld;
        }
           cout<<sum<<endl;
          
    }
}
