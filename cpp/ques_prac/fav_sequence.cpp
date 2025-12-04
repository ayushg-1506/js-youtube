#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    vector<vector<int>> r;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int s = a.size();
        vector<int> b(n);
        int m = s/2;
        for(int i=0;i<m;i++){
           b[2*i] = a[i];
        }
        for(int i=0;i<m;i++){
           b[2*i+1] = a[s-i-1];
        }
         if(s%2 != 0){
          b[s-1] = a[m];
        }
        r.push_back(b);
    }
    for(vector v : r){
        for(int p : v){
            cout << p << " ";
        }
        cout << endl;
    }
}