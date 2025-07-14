// Monopoly in Chefland


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,r1,r2,r3;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>r1>>r2>>r3;
        if (r1 > r2 + r3 || r2 > r1 + r3 || r3 > r1 + r2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
}
