#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

void speedup() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void process() {
	int t;
    cin >> t;
    while(t--) {
        int n, k; 
        cin >> n >> k;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        for(int i = n - 1; i > n - k - 1; i--) cout << a[i] << " ";
        
        cout << endl;
    }
}

int main() {
	speedup();
    process();

    return 0;
}

