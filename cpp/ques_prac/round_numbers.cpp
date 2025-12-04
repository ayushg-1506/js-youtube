#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<vector<int>> r;
    for(int i = 0 ; i<t ; i++){
       string n ; 
       cin >> n;
       int s = n.size();
       if(s<2){
         r.push_back({1});
         r.push_back({stoi(n)});
         
        }
        else if(count(n.begin(),n.end(), '0') == s-1  && n[0] != '0'){
         r.push_back({1});
         r.push_back({stoi(n)});
         
        }
       else{ 
            vector<int> x;
            int c = 0;
            for(int j = 0 ; j<s ; j++){
                if(n[j] != '0'){
                    int d = n[j] - '0';
                d *= pow(10,(s-j-1));
                x.push_back(d);
                c++;
                }
            }
            r.push_back({c});
            r.push_back(x);
        }
    }
    for(vector<int> a : r){
        for(int v : a){
        cout << v << " ";}
        cout << endl;
    }
return 0;
}