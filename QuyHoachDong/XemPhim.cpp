#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int c, n;
    cin >> c >> n;
    int a[200];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int dp[200][26000];
    memset(dp, 0, sizeof(dp));
    int res = 0;
    
    for(int i = 1; i <= n; i++) {
    	for(int j = 1; j <= c; j++) {
    		if(j < a[i]) dp[i][j] = dp[i - 1][j];
    		else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i]] + a[i]);
		}
	}
	
	cout << dp[n][c];
	
    return 0;
}


