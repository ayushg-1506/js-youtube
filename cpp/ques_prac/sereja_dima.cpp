#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>  n;
    int cards[n];
for(int i = 0 ; i < n ; i++){
    cin >> cards[i];   
}
int sereja = 0 , dima =0, pick= 0;
    bool turn = 0; 
int l = 0 , r = n-1;
while(l<=r){
    if(cards[l]>cards[r]){
       pick = cards[l];
       l++;}
    else {
          pick =cards[r];
          r--; 
    }
    if(!turn){
        sereja += pick;}
    else{
        dima += pick;
    }
    turn = !turn;
    }
 cout << sereja << " " << dima ;
}
