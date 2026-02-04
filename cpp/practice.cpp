#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<long long>;
using vvl = vector<vector<long long>>;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >>t;
    while(t--){
        int a,b;
        cin >>a>>b;
        string x,s;
        cin >>x;
        cin >>s;
        int c=0;
        bool t = false;
        while(x.find(s)==string::npos){
            if(x.size()>25){
                t= true;
                break;
            }
            x+=x;
            c++;
        }
        if(t){
            cout << -1<<endl;
        }
        else{
            cout << c<<endl;
        }
    }
    
    
}
