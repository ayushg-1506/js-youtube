#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); //to make the code faster + tells the output all at once 
    cin.tie(nullptr); //to make the code faster

    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << "\n";
            continue;
        }

        
        if (count(a.begin(), a.end(), '1') != count(b.begin(), b.end(), '1')) {
            cout << -1 << "\n";
            continue;
        }

        string doubled = a + a;
        size_t pos = doubled.find(b);

        if (pos == string::npos || pos >= a.size())
            cout << -1 << "\n";
        else
            cout << pos << "\n";
    }
    return 0;
}

// too much time consuming sol(mine)
// #include  <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     string a,b;
//     vector<int> p;
//    for(int i = 0; i<t ; i++){
//         cin >> a >> b;
//         int c= 0;
//         if(a == b){
//             p.push_back(0);
//             continue;
//         }
//         while(a != b){
//          a.push_back(a[0]);
//          a.erase(0,1);
//          c++;
//          if(c == a.size()){
//              p.push_back(-1);
//              break;
//              }
//          }
         
//      if(a == b){
//          p.push_back(c);
//          }
     
//     }
//     for(int q : p){
//         cout << q << endl;
//     }
// }

