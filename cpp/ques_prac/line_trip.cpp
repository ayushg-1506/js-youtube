#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> r;
    while(t--){
       int n , x;
       cin >> n >> x;
       vector<int> a(n+1);
       a[0] = 0;
       for(int i=1;i<n+1;i++){
        cin >> a[i];
       }
       int m = 0;
       for(int i=1;i<n+1;i++){
        m = max(m , a[i]-a[i-1]);
       }
       m = max(m , 2*(x -a[n]));
       r.push_back(m);
    }
    for(int v :r){
        cout << v << endl;
    }
    return 0;
}