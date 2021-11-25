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
        ll n, m;
        cin >> n >> m;
        vector<ll> v1(n);
        vector<ll> v2(m);
        
        for(ll i = 0; i < n; i++) cin >> v1[i];
        for(ll i = 0; i < m; i++) cin >> v2[i];

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        cout << v1[n - 1] * v2[0] << endl;
    }
}

int main() {
	speedup();
    process();

    return 0;
}

