#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int n, k;
char a[100];
int m[100];
vector<string> res;

void Try(int i) {
	for(int j = 0; j <= 1; j++) {
		m[i] = j;
		if(i == n) {
			int dem = 0;
			for(int l = 1; l <= n; l++) if(m[l] == 1) dem++;
			if(dem == k) {
				string tmp;
				for(int l = 1; l <= n; l++) {
					if(m[l] == 1) tmp += a[l];
				}
				res.push_back(tmp);
			}
		}
		else Try(i + 1);
	}
}

void print() {
	sort(res.begin(), res.end());
	for(int i = 0; i < res.size(); i++) {
		cout << res[i] << endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
	while(t--) {
		cin >> n >> k;
		for(int i = 1; i <= n; i++) {
			a[i] = char(64 + i);
		}
		
		res.clear();
		Try(1);
		print();
	}

    return 0;
}


