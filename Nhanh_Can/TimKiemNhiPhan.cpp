#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	ll t;
	cin >> t;
	while(t--) {
		ll n, k;
		cin >> n >> k;
		int a[n + 5];
		for(int i = 0; i < n; i ++) cin >> a[i];
		int f = lower_bound(a, a + n, k) - a;
		if(a[f] == k) cout << f + 1 << endl;
		else cout << "NO" << endl;
	}
    
    return 0;
}


