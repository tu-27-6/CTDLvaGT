#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

void process(int a[], int n) {
	int ans = 0;
	for(int i = 0; i < 10; i++) {
		ans += (n / a[i]);
		n %= a[i];
	}
	
	cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
    	int a[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
		int n;
    	cin >> n; 	
    	
    	process(a, n);
	}
    

    return 0;
}


