#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

void speedup() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll count(vector<int> Y, int m, int dp[], int x) {
    if(x == 0) return 0;
    if(x == 1) return dp[0];
    int tmp = upper_bound(Y.begin(), Y.end(), x) - Y.begin();

    ll ans = m - tmp;
    ans += dp[0] + dp[1];
    if(x == 2) ans -= (dp[3] + dp[4]);
    if(x == 3) ans += dp[2];
    return ans;
}

void process() {
	int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> X(n);
        vector<int> Y(m);

        for(int i = 0; i < n; i++) cin >> X[i];

        int dp[10] = {0};

        for(int i = 0; i < m; i++) {
            cin >> Y[i];
            if(Y[i] <= 4) dp[Y[i]]++;
        }

        sort(Y.begin(), Y.end());

        ll dem = 0;
        for(int i = 0; i < n; i++) {
            dem += count(Y, m, dp, X[i]);
        }

        cout << dem << endl;
    
    }
}

int main() {
	speedup();
    process();

    return 0;
}