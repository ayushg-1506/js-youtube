 #include <iostream>
using namespace std;

int main (){
    int n ,k,a;
    int sum =0;
    cin >> n >> k;
    int points[n];
  for(int i = 0 ; i<n ; i++){
     cin >> points[i];}
    a = points[k-1];
    for(int p = 0 ; p<n; p++){
        if(points[p]>=a && points[p]!=0){
            sum += 1;
        }
        
    }
    cout << sum;
}