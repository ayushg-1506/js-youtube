#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cin >> n;
    vector<int> a(n);
    for(int i= 0 ; i<n ; i++){
        cin >> a[i];
         sum += a[i]; //sum = accumulate(a.begin(), a.end(), 0);
    }
    sort(a.rbegin(),a.rend());
    
    int my_sum = 0 , count = 0;
    for(int i= 0 ; i<n ; i++){
        my_sum += a[i];
        count++;
        if(my_sum > sum - my_sum){
            cout << count;
            return 0;
        }
    }

}