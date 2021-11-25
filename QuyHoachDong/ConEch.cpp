#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll dp[111];
    dp[1] = 1, dp[2] = 2, dp[3] = 4;
    for(ll i = 4; i <= 100; i++) {
    	dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
    
    int t;
    cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		
		cout << dp[n] << endl;
	}

    return 0;
}


