#include  <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> b;
    for(int i = 0 ; i<n ; i++){
     int a;
     cin >> a;
     b.push_back(a);
     }
    sort(b.begin(), b.end()) ;
    int minv = 0 , cminv = 0;
    for(int i = 0 ; i<m; i++){
      cminv += b[i];
      minv = min(minv , cminv);
      
    }
    cout << abs(minv);
    return 0;
}
