// Lunchtime

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t, x;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> x;
        if (x >= 1 && x <= 4) {
            cout << "YES" << endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
