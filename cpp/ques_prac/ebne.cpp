#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<string> answers;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        string res = "";

        for (char c : s) {
            if ((c - '0') % 2 == 1)  // if digit is odd
                res += c;
            if (res.size() == 2) break;
        }

        if (res.size() < 2) answers.push_back("-1");
        else answers.push_back(res);
    }

    for (string ans : answers)
        cout << ans << endl;

    return 0;
}
