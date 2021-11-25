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
    	int n;
    	cin >> n;
    	int a[n][n];
    	for(int i = 0; i < n; i++) cin >> a[0][i];
    	
    	int col = n;
    	
    	for(int i = 1; i < n; i++) {
    		for(int j = 0; j < col; j++) {
    			a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
			}
			col--;
		}
		
		col = n;
		
		for(int i = 0; i < n; i++) {
			cout << "[";
			for(int j = 0; j < col - 1; j++) {
				cout << a[i][j] << " ";
			}
			cout << a[i][col - 1] << "]";
			col--;
			cout << endl;
		}
	}

    return 0;
}


