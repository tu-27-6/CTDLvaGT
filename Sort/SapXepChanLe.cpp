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
	ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];

    vector<ll> chan;
    vector<ll> le;

    for(ll i = 0; i < n; i++) {
        if(i % 2 != 0) chan.push_back(a[i]);
        else le.push_back(a[i]);
    }

    sort(chan.begin(), chan.end());
    reverse(chan.begin(), chan.end());
    sort(le.begin(), le.end());

    for(ll i = 0; i < n / 2; i++) cout << le[i] << " " << chan[i] << " ";

    if(n % 2 != 0) cout << le.back();

}

int main() {
	speedup();
    process();

    return 0;
}

