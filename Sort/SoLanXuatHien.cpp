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
        for(ll i = 0; i < n; i++) cin >> a[i];

        int sum = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == k) sum++;
        }

        if(sum > 0) cout << sum << endl;
        else cout << -1 << endl;
    }
}

int main() {
	speedup();
    process();

    return 0;
}

