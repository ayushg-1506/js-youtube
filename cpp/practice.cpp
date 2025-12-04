#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	vector<string> r;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    string s;
	    cin >> s;
	    int a=0,b=0;
	    for(int i=0;i<n;i++){
	        if(s[i] == '0'){
	            a++;
	        }
	        else{
	            b++;
	        }
	    }
		if(k ==1){
			if(a==b || a == b-1 || a-1 ==b){
				r.push_back("YES");
				continue;
			}
		}
	    int c = n-k;
	    int d = min(a,b);
		if(n%2 == 0){
			if(d >= c){
				r.push_back("YES");
			}
			else{
				r.push_back("NO");
			}
	   }
	   if(n%2 != 0){
			if(d >= c-1){
				r.push_back("YES");
			}
			else{
				r.push_back("NO");
			}
		}
	}
	for( string v:r){
	    cout << v << endl;
	}

}
