#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> r;
    while(t--){
        int n , c;
        cin >> n >> c;
        int sum =0;
        vector<int> a(n);
        unordered_map<int,int> b;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int& p: a){
            b[p]++;
        }
        for(auto& d : b){
           if(c > d.second){
              sum += d.second;
           }
           else{
            sum += c;
           }
        }
        r.push_back(sum);

    }
    for(int k : r){
        cout << k << endl;
    }
}