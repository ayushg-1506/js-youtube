#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, x,y,n;
    cin >> t;
    vector<int> r;
    while(t--){
        cin >> x >> y >> n ;
        int a;
        int k;
        a = n % x;
        if(a > y){
             k = n - (a-y);
        }
        if(a == y){
            k = n;
         }
        if(a < y){
            k = (n-a) - (x-y);
        }
      r.push_back(k);
    }
    for(int q : r){
        cout << q << endl;
    }
    return 0;
}

// short one
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long x, y, n;
//         cin >> x >> y >> n;

//         long long k = ((n - y) / x) * x + y;
//         cout << k << "\n";
//     }
//     return 0;
// }
