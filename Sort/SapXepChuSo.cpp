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
        vector<string> v(n);
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        string x;
        for(ll i = 0; i < n; i++) {
            x += v[i];
        }

        vector<int> tmp;
        for(ll i = 0; i < x.size(); i++) {
            tmp.push_back((int) x[i]);
        }

        set<int> tmp2(tmp.begin(), tmp.end());
        vector<int> res(tmp2.begin(), tmp2.end());

        for(ll i = 0; i < res.size(); i++) {
            cout << (char)res[i] << " ";
        }
        cout << endl;
    }
}

int main() {
	speedup();
    process();

    return 0;
}

