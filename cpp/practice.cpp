#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int c =0;
        for(int i=0;i<a.size()-1;i++){
           // int c= 0;
            for(int j=i+1;j<a.size();j++){
             if(a[i]>a[j]){
                a.erase(a.begin()+j);
               c++;
               j--;
             }
             
            }
        }
        cout << c << endl;
    }

    return 0;
}