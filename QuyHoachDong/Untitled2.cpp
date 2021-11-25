#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;
const ll mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
    	ll n, k;
    	cin >> n >> k;
    	ll d[n + 5] = {0};
    	d[0] = d[1] = 1;
    	
    	for(ll i = 2; i <= n; i++) {
    		for(ll j = 1; j <= min(i, k); j++) {
    			d[i] += d[i - j];
    			d[i] %= mod;
			}
		}
		
		cout << d[n] << endl;
	}

    return 0;
}


