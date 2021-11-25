#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

void process(ll a[], ll n, ll k) {
	int r = n - 1;
	int l = 0;
	while(r >= l) {
		int mid = l + (r - l) / 2;
		if(a[mid] == k) {
			cout << mid + 1 << endl;
			return;
		}
		
		if(a[mid] > k) r = mid - 1;
		
		if(a[mid] < k) l = mid + 1;
	}
	
	cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--) {
    	ll n, k;
    	cin >> n >> k;
    	ll a[n];
    	for(ll i = 0; i < n; i++) cin >> a[i];
    	
    	process(a, n, k);
	}

    return 0;
}

// 1 3 5 7 11 13 15 17 19

