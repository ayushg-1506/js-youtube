#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 0,b = 0;
    string s;
    cin >>  s;
     int n = s.size();
     for(int i =0 ; i< n ; i++){
        if(isupper(s[i])){
            a+=1; }
        else{
         b+=1;}
     }
     if(a>b){
        for(int i= 0; i <n ; i++){
            s[i] = toupper(s[i]);
        }
        
     }
     else{
        for(int i= 0; i <n ; i++){
            s[i] = tolower(s[i]);
        }
     }
     cout << s;
     return 0;

}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     int upper = count_if(s.begin(), s.end(), ::isupper);
//     int lower = s.size() - upper;

//     if (upper > lower)
//         transform(s.begin(), s.end(), s.begin(), ::toupper);
//     else
//         transform(s.begin(), s.end(), s.begin(), ::tolower);

//     cout << s;
//     return 0;
// }
