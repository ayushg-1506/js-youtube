#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int maxFreq = 1, currentFreq = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            currentFreq++;
            maxFreq = max(maxFreq, currentFreq);
        } else {
            currentFreq = 1;
        }
    }

    cout << maxFreq;
    return 0;
}
