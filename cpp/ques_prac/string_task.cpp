#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string r = "";
    transform(s.begin() , s.end() , s.begin() , ::tolower);
    for(int i=0 ; i<s.size();i++){
       if(s[i]!= 'a' && s[i]!= 'o' && s[i]!= 'y' &&s[i]!= 'e' &&s[i]!= 'u' &&s[i]!= 'i' ){
             r += ".";
             r += s[i];
         }
     }
 cout << r;      
 return 0;  
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     string vowels = "aoyeui";
//     string result = "";

//     // convert to lowercase
//     transform(s.begin(), s.end(), s.begin(), ::tolower);

//     for (char c : s) {
//         // skip vowels
//         if (vowels.find(c) == string::npos) {  // npos - no position returns true if c is not there in vowels
//             result += '.';
//             result += c;
//         }
//     }

//     cout << result;
//     return 0;
// }
