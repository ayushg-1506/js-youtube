#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--) {
        int p, k;
        cin >> p >> k;

        string s;
        cin >> s;  // read "1001"

        int c = 0;
        int i = 0;

        while (i < p) {
            if (s[i] == '0') {
                c++;
                i++;
            } else {   // s[i] == '1'
                i += k + 1;
            }
        }

        cout << c << "\n";
    }

    return 0;
}