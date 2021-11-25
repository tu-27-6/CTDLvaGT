#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

void merge(ll a[], ll l, ll m, ll r) {
	ll n1 = m - l + 1;
	ll n2 = r - m;
	ll tmp1[n1], tmp2[n2];
	
	for(int i = 0; i < n1; i++) tmp1[i] = a[l + i];
	for(int i = 0; i < n2; i++) tmp2[i] = a[m + 1 + i];
	ll i = 0, j = 0, k = l;
	while(i < n1 && j < n2) {
		if(tmp1[i] <= tmp2[j]) {
			a[k] = tmp1[i];
			i++;
		}
		else {
			a[k] = tmp2[j];
			j++;
		}
		k++;
	}
	
	while(i < n1) {
		a[k] = tmp1[i];
		i++;
		k++;
	}
	
	while(j < n2) {
		a[k] = tmp2[j];
		j++;
		k++;
	}
}

void process(ll a[], ll l, ll r) {
	if(l < r) {
		ll m = l + (r - l) / 2;
		process(a, l, m);
		process(a, m + 1, r);
		
		merge(a, l, m, r);
	}
}

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
    	
    	process(a, 0, n - 1);
    	
    	for(ll i = 0; i < n; i++) cout << a[i] << " ";
    	cout << endl;
	}
    return 0;
}


