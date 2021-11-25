#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

int dp[1005][1005];
string s1, s2;

void process() {
	int res = 0;
	for(int i = 1; i <= s1.size(); i++) {
		for(int j = 1; j <= s2.size(); j++) {
			if(s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			res = max(res, dp[i][j]);
		}
	}
	
	cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
    	memset(dp, 0, sizeof(dp));
    	cin >> s1 >> s2;
    	process();
	}

    return 0;
}

