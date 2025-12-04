#include <iostream>
using namespace std;
int main(){
    int a;
   cin >> a;
   int sum = 0;

   for(int i=0 ; i<a ; i++){
    int p , v , t ; // Petya(p), Vasya(v) and Tonya(t)
    cin  >> p;
    cin >> v;
    cin >> t;
    
    if(p==1){
        if(v==1 || t==1){
            sum += 1; }}

   else if(v==1){
     if(p==1 || t==1){
            sum += 1;}}

   else if(t==1){
     if(p==1 || v==1){
            sum += 1;}}
}
   cout << sum << endl;
}

// other code (better)
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;  // number of problems
//     int count = 0;

//     for (int i = 0; i < n; i++) {
//         int a, b, c;
//         cin >> a >> b >> c;

//         if (a + b + c >= 2) {
//             count++;
//         }
//     }

//     cout << count << endl;
//     return 0;
// }
