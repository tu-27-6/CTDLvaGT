#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

ll n, k;
const ll mod = 1e9 + 7;

ll mul(ll a, ll b) {
	if(b == 0) return 0;
	ll tmp = mul(a, b / 2);
	if(b % 2 == 1) return (tmp * 2 + a) % mod;
	return (tmp * 2) % mod; 
}

ll res(ll n, ll k) {
	if(k == 0) return 1;
	if(k == 1) return n % mod;
	ll tmp = res(n, k / 2);
	ll ans = mul(tmp, tmp);
	if(k % 2 == 1) return (ans * n) % mod;
	return ans % mod;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
    	cin >> n >> k;
    	cout << res(n, k) << endl;
	}

    return 0;
}


