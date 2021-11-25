#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    int a[n + 5];
    for(int i = 1; i <= n; i++) cin >> a[i];
    
    int dp[1005] = {0};
    int ans = 1;
    
    for(int i = 1; i <= n; i++) {
    	dp[i] = 1;
    	for(int j = 1; j < i; j++) {
    		if(a[i] > a[j]) dp[i] = max(dp[i], dp[j] + 1);
		}
		
		ans = max(ans, dp[i]);
	}
	
	cout << ans << endl;

    return 0;
}


