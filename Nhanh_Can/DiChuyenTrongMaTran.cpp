#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

int Try(int n, int m) {
	if(n == 1 || m == 1) return 1;
	
	return Try(n - 1, m) + Try(n, m - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
    	int n, m;
    	cin >> n >> m;
    	int a[200][200];
    	for(int i = 0; i < n; i++) {
    		for(int j = 0; j < m; j++) {
    			cin >> a[i][j];
			}
		}
		
		cout << Try(n, m) << endl;
	}

    return 0;
}


