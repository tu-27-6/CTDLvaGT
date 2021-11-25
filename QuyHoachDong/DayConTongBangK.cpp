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
		int n, s;
		cin >> n >> s;
		int a[n + 5];
		for(int i = 1; i <= n; i++) cin >> a[i];
		int dp[40005] = {0};
		dp[0] = 1;
		
		for(int i = 1; i <= n; i++) {
			for(int j = s; j >= a[i]; j--) {
				if(dp[j] == 0 && dp[j - a[i]] == 1) dp[j] = 1;
			}
		}
		
		if(dp[s]) cout << "YES" << endl;
		else cout << "NO" << endl;
		
	}
	
    return 0;
}


