// Determine the Score
 

#include <iostream>

using namespace std;

int main() {
    int t, total_points, passed_cases;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> total_points >> passed_cases;
        cout << (total_points * passed_cases) / 10 << endl;
    }

    return 0;
}
