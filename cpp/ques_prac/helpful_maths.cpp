#include <bits/stdc++.h>
using namespace std;

int main(){
   string s;
   cin >> s;
   string r = "";
   for(char c : s){
      if( c != '+'){
          r += c;
         }
     }
   sort(r.begin(), r.end());
   int a = r.size();
   string b = "";
   for(int i =0 ; i<a; i++){
    b += r[i];
    if(i != a -1){
        b += '+';
    }
    
   }
    cout << b;
   
}

