#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<string> s;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int b = 0,c = 0, sum =0;
        for(int i = 0 ; i<n ; i++){
            cin >> a[i];
            sum +=  a[i];
            if(a[i] == 1){
                b++;
            }
            else c++;
        }
        if(sum%2 == 0 && (c%2 == 0 || (b%2 == 0 && b>0))){
            s.push_back("YES");
        }
        else  s.push_back("NO");
    }
    for(string r : s){
        cout << r << endl;
    }
}