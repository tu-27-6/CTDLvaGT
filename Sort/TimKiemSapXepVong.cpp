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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll res;
        for(ll i = 0; i < n; i++) {
            if(a[i] == k) {
                res = i + 1;
                break;
            }
        }

        cout << res << " ";
    }
}

int main() {
	speedup();
    process();

    return 0;
}

