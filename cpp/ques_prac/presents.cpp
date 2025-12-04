#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> c;
    for(int i = 0 ; i<n ; i++){
      cin >> a[i];
    }
    for(int i = 1 ; i<=n ; i++){
      auto it = find(a.begin(), a.end(), i);
      int b = (it - a.begin()) + 1;
      c.push_back(b);
    }
    for(int d : c){
        cout << d << " ";
    }
}