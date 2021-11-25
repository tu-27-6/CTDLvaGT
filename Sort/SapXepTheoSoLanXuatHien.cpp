#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

void speedup() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

struct data {
    int value, dem;
};

bool cmp(data a, data b) {
    if(a.dem > b.dem || (a.dem == b.dem && a.value < b.value)) return true;
    
    return false;
}

void process() {
	int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        data a[n];
        int f[n + 5] = {0};
        for(int i = 0; i < n; i++) cin >> a[i].value;

        for(int i = 0; i < n; i++) f[a[i].value]++;

        for(int i = 0; i < n; i++) a[i].dem = f[a[i].value];

        sort(a, a + n, cmp);

        for(int i = 0; i < n; i++) cout << a[i].value << " ";

        cout << endl;
    }
}

int main() {
	speedup();
    process();

    return 0;
}

