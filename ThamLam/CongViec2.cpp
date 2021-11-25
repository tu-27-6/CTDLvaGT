#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

struct Job {
	int id, dl, pro;
};

bool comp(Job a, Job b) {
	return a.pro > b.pro;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		Job a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i].id >> a[i].dl >> a[i].pro;
		}
		sort(a, a + n, comp);
		
		int dem = 0, res = 0;
		int f[2000] = {0};
		for(int i = 0; i < n; i++) {
			while(f[a[i].dl] == 1 && a[i].dl > 0) a[i].dl--;
			if(f[a[i].dl] == 0 && a[i].dl > 0) {
				f[a[i].dl] = 1;
				dem++;
				res += a[i].pro;
			}
		}
		
		cout << dem << " " << res << endl;
	}
	
	return 0;
}
