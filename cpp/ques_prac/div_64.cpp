#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int a =0;
    if(s.size()<=100 && s.size() >= 7){
       for(int i = s.size()-1 ; i>0 ; i--){
          if(s[i] == '0'){
            a++;
               if(a==6){
                  break;
                 }
              
          }
          if(s[i] == '1'){
            s.erase(i,1);
          }
       }
   
     }
    int c = count(s.begin(), s.end() , '1');
    if(s.size()>=7 && c >0 ){
         cout << "yes";
    }
    else{ cout << "no"; }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     int zeroCount = 0;
//     bool hasOneBefore = false;

//     // traverse from right to left
//     for (int i = s.size() - 1; i >= 0; i--) {
//         if (s[i] == '0') {
//             zeroCount++;
//         } 
//         else { // it's a '1'
//             if (zeroCount >= 6) {
//                 hasOneBefore = true;
//                 break;
//             }
//         }
//     }

//     if (hasOneBefore)
//         cout << "yes";
//     else
//         cout << "no";

//     return 0;
// }

