#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

const ll mod = 1e9 + 7;
ll dp[2000][2000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int i = 0; i <= 1000; i++) {
    	for(int j = 0; j <= i; j++) {
    		if(i == j || j == 0) dp[i][j] = 1;
    		else dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
    		dp[i][j] %= mod;
		}
	}
    
    int t;
    cin >> t;
    while(t--) {
    	int n, k;
    	cin >> n >> k;
		
		cout << dp[n][k] << endl;2

5 2

10 3
	}

    return 0;
}


