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
    	ll n;
    	cin >> n;	
    	priority_queue<ll, vector<ll>, greater<ll> > a;
    	ll tmp;
    	for(ll i = 0; i < n; i++) {
    		cin >> tmp;
    		a.push(tmp);
		}
		
		ll res = 0;
		while(a.size() > 1) {
			ll x = a.top();
			a.pop();
			ll y = a.top();
			a.pop();
			a.push(x + y);
			res = res + (x + y);
		}
		
		cout << res << endl;
	}

    return 0;
}


