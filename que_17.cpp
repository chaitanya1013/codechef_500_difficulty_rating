// Reach on Time 

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int test_case, min_req;
    cin >> test_case;

    for (int i = 1; i <= test_case; i++) {
        cin >> min_req;
        if (min_req < 30) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }

}