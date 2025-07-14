//  Speciality


// Chef and Masks

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t, x, y,z;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> x >> y>>z;
        if (x>y && x>z) {
            cout << "SETTER" << endl;
        }
        else if (y>x && y>z) {
            cout << "TESTER" << endl;
        }
        else if (z>x && z>y) {
            cout << "EDITORIALIST" << endl;
        }
    }
}