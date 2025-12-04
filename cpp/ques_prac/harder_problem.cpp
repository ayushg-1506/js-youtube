#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   vector<vector<int>> p;
   while(t--){
        int n;
        cin >> n;
        unordered_map<int,int> r;
        vector<int> b;
        for(int i = 0 ; i<n; i++){
            int a;
            cin >> a;
            r[a]++;    
        }
        for(auto& c : r){
             b.push_back(c.first);
        }
        for(int i = b.size() ; i<n; i++){
            b.push_back(696+i);
        }
        p.push_back(b);
    }
   for(vector d : p){
    for(int e : d){
        cout << e << " ";
    }
    cout << endl;
   }
}