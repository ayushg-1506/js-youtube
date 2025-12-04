#include <iostream>
using namespace std;

int main(){
  int a;
  cin >> a;
    int b[7];
for(int i=0; i<=6;i++){
    cin >> b[i];}

   int day = 0;
while(a>0){
    a -= b[day];
    if(a<=0){
        cout << day + 1 << endl; 
    break;}
day = (day + 1) % 7;
}
return 0;
}

