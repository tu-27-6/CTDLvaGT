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
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for(int i = 0; i < n; i++) cin >> a[i];
		
		int dem = 0;
		for(int i = 0; i < n; i++) {
			for(int j = i + 1; j < n; j++) {
				if(a[i] + a[j] == k) dem++;
			}
		}
		
		cout << dem << endl;
    }
}

int main() {
	speedup();
    process();

    return 0;
}



