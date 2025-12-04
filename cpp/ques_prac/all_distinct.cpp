#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int l;
        cin >> l;
        int a[l];
        int c = 0;
        vector<int> r;
        
        for(int i = 0 ; i<l ; i++){
           cin >> a[i];
           if(find(r.begin() ,r.end() , a[i]) == r.end()){
              r.push_back(a[i]);
             }
           else {
            c++;
           }
         }
        if(c%2 == 0){
            ans.push_back(r.size());
        }
        else{
            ans.push_back(r.size() -1);
        }
    }
    for(int b : ans){
       cout << b << endl;
    }
    
}