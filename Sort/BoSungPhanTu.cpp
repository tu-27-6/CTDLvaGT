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
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        ll dem = 0;
        
        for(ll i = 1; i < n; i++) if(v[i] - v[i - 1] > 1) dem += v[i] - v[i - 1] - 1;

        cout << dem << endl;
        
    }
}

int main() {
	speedup();
    process();

    return 0;
}

