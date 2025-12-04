#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int num = stoi(s);
    do{
     
     num+=1;
     s = to_string(num);
     }while(s[0]==s[1] || s[0]==s[2] ||s[0]==s[3] || s[1]==s[2] ||s[1]==s[3] || s[2]==s[3]);
    
    cout << s ;
    return 0;
}

