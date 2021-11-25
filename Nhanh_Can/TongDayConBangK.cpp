#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int n, k, a[101], b[101];
vector< vector< int > > res;

void Try(int i) {
    for(int j = 0; j <= 1; j++) {
        a[i] = j;
        if(i == n) {
            int sum = 0;
            for(int l = 1; l <= n; l++) {
                if(a[l] == 1) sum += b[l];
            }
            if(sum == k) {
                vector<int> x;
                for(int l = 1; l <= n; l++) {
                    if(a[l] == 1) x.push_back(b[l]);
                }
                res.push_back(x);
            }
        }
        else Try(i + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
    	cin >> n >> k;
    	for(int i = 1; i <= n; i++) cin >> b[i];
    	sort(b + 1, b + n + 1);
    	
    	Try(1);
    	
    	if(res.size() == 0) cout << -1 << endl;
    	else {
    		sort(res.begin(), res.end());
    	for(int i = 0; i < res.size(); i++) {
    		cout << "[";
    		for(int j = 0; j < res[i].size() - 1; j++) {
    			cout << res[i][j] << " ";
			}
			cout << res[i][res[i].size() - 1] << "] ";
		}
		cout << endl;	
		}
    	res.clear();
	}

    return 0;
}

