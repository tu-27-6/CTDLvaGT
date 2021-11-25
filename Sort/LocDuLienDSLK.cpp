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
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        
        int f[10000];
        for(int i = 0; i < n; i++) {
            f[a[i]]++;
        }

        for(int i = 0; i < n; i++) {
            if(f[a[i]] != 0) {
                cout << a[i] << " ";
                f[a[i]] = 0;
            }
        }
}

int main() {
	speedup();
    process();

    return 0;
}

