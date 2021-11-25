#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
    	int n, v;
    	cin >> n >> v;
    	int a[n + 5];
    	int c[n + 5];
    	for(int i = 1; i <= n; i++) cin >> a[i];
    	for(int i = 1; i <= n; i++) cin >> c[i];
    	
    	int dp[n + 5][n + 5];
    	int res = 0;
    	
    	for(int i = 1; i <= n; i++) {
    		for(int j = 1; j <= v; j++) {
    			if(j < a[i]) dp[i][j] = dp[i - 1][j];
    			else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i]] + c[i]);
    			
    			res = max(res, dp[i][j]);
			}
		}
		
		cout << res << endl;
    	
	}

    return 0;
}
