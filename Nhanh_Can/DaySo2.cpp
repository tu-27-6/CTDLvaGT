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
    	int n;
    	cin >> n;
    	int a[n][n];
    	for(int i = 0; i < n; i++) {
    		cin >> a[0][i];
    	}
    	
    	int cot = n;
    	
    	for(int i = 1; i < n; i++) {
    		for(int j = 0; j < cot; j++) {
    			a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
    		}
    		cot--;
    	}
    	
    	cot = n;
    	vector< vector<int> > res;
    	for(int i = 0; i < n; i++) {
    		vector<int> tmp;
    		for(int j = 0; j < cot; j++) {
    			tmp.push_back(a[i][j]);
    		}
    		cot--;
    		res.push_back(tmp);
    	}
    	
    	for(int i = res.size() - 1; i >= 0; i--) {
    		for(int j = 0; j < res[i].size(); j++) {
    			if(j == 0) cout << "[";
    			cout << res[i][j];
    			if(j == res[i].size() - 1) cout << "] ";
    			if(j < res[i].size() - 1) cout << " "; 
    		}
    	}
    	
    	cout << endl;
    }
    
    return 0;
}


