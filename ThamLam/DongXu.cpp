#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int a[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
    	cin >> n;
    	int res = 0;
    	for(int i = 0; i < 10; i++) {
    		res += (n / a[i]);
    		n %= a[i];
		}
		cout << res << endl;
	}

    return 0;
}


