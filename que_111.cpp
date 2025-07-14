// Dominant Army


#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) {
        int na, nb, nc;
        cin >> na >> nb >> nc; // Read the army sizes for kingdoms A, B, and C

        // Check if any army is dominant
        if (na > nb + nc || nb > na + nc || nc > na + nb) {
            cout << "YES" << endl; // Output "YES" if any army is dominant
        } else {
            cout << "NO" << endl; // Output "NO" otherwise
        }
    }

    return 0;
}