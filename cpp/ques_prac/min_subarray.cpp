#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
       cin >> a[i];
    }
    vector<vector<int>> r;
    for(int i=0;i<n-k+1;i++){
       int s = 0 ;
       int j =i;
       int b = k;
       while(b>0){    
            s += a[j];
            b--;
            j++;
        }
        r.push_back({s,i});
    }
  sort(r.begin(),r.end());
  cout << r[0][1];
}
