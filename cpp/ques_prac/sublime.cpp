#include <iostream>
using namespace std;

int main() {
    int t, x, n;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> x >> n;

        if (n % 2 == 0)
            cout << 0 << endl;
        else
            cout << x << endl;
    }

    return 0;
}

// this also wokrs
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     vector<int> results; // store all results

//     for (int i = 0; i < t; i++) {
//         int x, n;
//         cin >> x >> n;

//         if (n % 2 == 0)
//             results.push_back(0); // store 0 if even
//         else
//             results.push_back(x);  // store x if odd
//     }

//     // Print all results at once
//     for (int res : results) {
//         cout << res << endl;
//     }

//     return 0;
// }
