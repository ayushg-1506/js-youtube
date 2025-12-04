#include  <bits/stdc++.h>
using namespace std;

int main(){
  int x ,y;
  vector<int> a= {0};
  vector<int> b;
  cin >> x;
  for(int i = 1 ; i<=x ; i++){
      int s=0;
      cin >> y;
      a.push_back(y);
      sort(a.begin(),a.end());
      for(int j=0; j<=i;j++){
             if(j==0){
                 s += a[1] - a[0];
                 }
             else if(j==i){
                 s += a[j] - a[j-1];
                 }
             else if(j>0 && j<i){
                 if((a[j+1] - a[j]) < (a[j] - a[j-1])){
                     s +=  a[j+1] - a[j];
                     }
                 else{
                     s += a[j] - a[j-1];
                     }
                 
                 }
             } 
     b.push_back(s); }
 for(int p : b){
    cout << p << endl;
     }
return 0;
}
