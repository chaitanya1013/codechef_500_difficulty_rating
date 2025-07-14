// Bob at the Bank

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,w,x,y,z;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>w>>x>>y>>z;
        cout<<w+((x-y)*z)<<endl;
    }
}
