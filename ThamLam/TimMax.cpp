#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;
const ll mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--) {
    	ll n;
    	cin >> n;
    	ll a[n];
    	for(ll i = 0; i < n; i++) cin >> a[i];
    	sort(a, a + n);
    	ll res = 0;	
    	for(ll i = 0; i < n; i++) {
    		res += (i * a[i]);
    		res %= mod;
		}
		
		cout << res << endl;
	}

    return 0;
}


