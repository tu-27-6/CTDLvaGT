#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

ll n, x;

struct Data {
	ll v1, v2, i;
};

bool comp(Data a, Data b) {
	if(a.v2 > b.v2) return false;
	if(a.v2 == b.v2 && a.i > b.i) return false;
	return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--) {
    	cin >> n >> x;
    	Data a[n];
    	for(ll i = 0; i < n; i++) {
    		cin >> a[i].v1;
    		a[i].v2 = abs(x - a[i].v1);
    		a[i].i = i;
		}
		
		sort(a, a + n, comp);
		for(ll i = 0; i < n; i++) cout << a[i].v1 << " ";
		cout << endl;
	}

    return 0;
}


