#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

int process(int a[], int n) {
	int sum = 0;
	for(int i = 0; i < n; i++) sum += a[i];
	
	if(sum % 2 != 0) return -1;
	
	int s = sum / 2;
	int dp[s + 5] = {0};
	
	for(int i = 0; i < n; i++) {
		for(int j = s; j >= a[i]; j--) {
			if(dp[j - a[i]] == 1 || j == a[i]) dp[j] = 1;
		}
	}
	
	return dp[s];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
    	int n, sum = 0;
    	cin >> n;
    	int a[n + 5];
    	for(int i = 0; i < n; i++) cin >> a[i];
    	
    	if(process(a, n) == 1) cout << "YES" << endl;
    	else cout << "NO" << endl;
	}

    return 0;
}


