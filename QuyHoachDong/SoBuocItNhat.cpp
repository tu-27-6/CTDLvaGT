#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	int a[n + 5];
    	for(int i = 1; i <= n; i++) cin >> a[i];
    	
    	int d[n + 5] = {0};
    	int res = 0;
    	for(int i = 1; i <= n; i++) {
    		d[i] = 1;
    		for(int j = 1; j < i; j++) {
    			if(a[i] >= a[j]) d[i] = max(d[i], d[j] + 1);
			}
			
			res = max(d[i], res);
		}
		
		cout << n - res << endl;
	}

    return 0;
}


