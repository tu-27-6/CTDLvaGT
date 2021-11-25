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
    	ll n; 
    	cin >> n;
    	ll a[n];
    	for(ll i = 0; i < n; i++) cin >> a[i];
    	sort(a, a + n);
    	
    	for(ll i = 0; i < n / 2; i++) {
    		cout << a[n - 1 - i] << " " << a[i] << " ";
		}
		
		if(n % 2 == 1) cout << a[n / 2 + 1];
		
		cout << endl;
	}
    
    
    

    return 0;
}


