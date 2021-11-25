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
        ll a, b, c;
        cin >> a >> b >> c;
        ll v1[a], v2[b], v3[c];

        for(ll i = 0; i < a; i++) cin >> v1[i];
        for(ll i = 0; i < b; i++) cin >> v2[i];
        for(ll i = 0; i < c; i++) cin >> v3[i];

        ll i = 0, j = 0, k = 0;

        bool check = true;
        while(i < a && j < b  && k < c) {
            if(v1[i] == v2[j] && v2[j] == v3[k]) {
                cout << v1[i] << " ";
                i++; j++; k++;
                check = false;
            }
            else if(v1[i] < v2[j]) i++;
            else if(v2[j] < v3[k]) j++;
            else k++;
        }
        if(check) cout << -1;
        cout << endl;
    }
}

int main() {
	speedup();
    process();

    return 0;
}

