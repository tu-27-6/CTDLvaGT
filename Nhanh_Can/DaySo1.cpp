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
    	for(int i = 0; i < n; i++) {
    		cout << "[";
    		for(int j = 0; j < cot - 1; j++) {
    			cout << a[i][j] << " ";
    		}
    		cout << a[i][cot - 1] <<"]";
    		cot--;
    		cout << endl;
    	}
   
    }
    
    return 0;
}


