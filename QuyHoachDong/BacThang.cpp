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
    	int n, k;
    	cin >> n >> k;
    	ll dp[n + 5] = {0};
    	dp[0] = dp[1] = 1;
    	
    	for(int i = 2; i <= n; i++) {
    		for(int j = 1; j <= min(i, k); j++) {
    			dp[i] += dp[i - j];
    			dp[i] %= mod;
			}
		}
		
		cout << dp[n] << endl;
	}

    return 0;
}


