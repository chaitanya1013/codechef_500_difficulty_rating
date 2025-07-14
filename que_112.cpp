// Playlist

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y;
    // x minute journey and y playlist duration
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y;
        cout<<x/(3*y)<<endl;
    }
}
