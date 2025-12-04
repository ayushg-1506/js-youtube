#include <bits/stdc++.h>
using namespace std;

long long check(vector<long long> &a, long long h, long long x){
    long long w = 0;
    for(long long v : a){
        if(h > v){
            w += (h - v);
            if (w > x) return w;   
        }
    }
    return w;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<long long> r;

    while(t--){
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long l = 1, h = 2e18, ans = 1;

        while(l <= h){
            long long mid = l + (h - l) / 2;   
            long long need = check(a, mid, x);

            if(need <= x){
                ans = mid;
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }

        r.push_back(ans);
    }

    for(long long v : r){
        cout << v << "\n";
    }

    return 0;
}
