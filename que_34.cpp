// Second Max of Three Numbers


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y,z;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y>>z;
        if ((x > y && x < z) || (x < y && x > z)) {
            cout << x << endl;
        } else if ((y > x && y < z) || (y < x && y > z)) {
            cout << y << endl;
        } else {
            cout << z << endl;
        }
    }
}
