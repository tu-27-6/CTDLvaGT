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
    	string s;
    	int n;
    	cin >> n >> s;
    	
    	int d[n + 5][n + 5];
    	memset(d, 0, sizeof(d));
    	int res = 0;
    	for(int i = 1; i <= n; i++) {
    		for(int j = 1; j <= n; j++) {
    			if(s[i - 1] == s[j - 1] && i != j) d[i][j] = d[i - 1][j - 1] + 1;
    			else d[i][j] = max(d[i - 1][j], d[i][j - 1]);
    			res = max(res, d[i][j]);
			}
		}
		
		cout << res << endl;
    	
	}

    return 0;
}


