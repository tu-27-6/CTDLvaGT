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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        set<ll> ans(a.begin(), a.end());
        vector<ll> res(ans.begin(), ans.end());
        
        if(res.size() == 1) cout << -1 << endl;
        else cout << res[0] << " " << res[1] << endl;
    }
}

int main() {
	speedup();
    process();

    return 0;
}

