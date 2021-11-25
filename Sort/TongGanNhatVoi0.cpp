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
        int n;
        cin >> n;
        vector<ll> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        ll sum = LLONG_MAX;

        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(abs(a[i] +a[j]) < abs(sum)) {
                    sum = a[i] + a[j];
                }
            }
        }

        cout << sum << endl;
    }
}

int main() {
	speedup();
    process();

    return 0;
}

