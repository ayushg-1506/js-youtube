#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
     int coins[] = {100,20,10,5,1};
     int count = 0;
     for(int c : coins){
        count += n/c;
        n %= c;
     }
     cout << count;
}