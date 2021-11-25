#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int n, k, a[100], b[100];
vector< vector<int> > res;
int dem = 0;

void Try(int i) {
	for(int j = 0; j <= 1; j++) {
		a[i] = j;
		if(i == n) {
			int sum = 0;
			for(int l = 1; l <= n; l++)	if(a[l] == 1) sum += b[l];
			if(sum == k) {
				dem++;
				vector<int> tmp;
				for(int l = 1; l <= n; l++) if(a[l] == 1) tmp.push_back(b[l]);
				res.push_back(tmp);
			}
		}
		else Try(i + 1);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> b[i];
    
    Try(1);
    for(int i = 0; i < res.size(); i++) {
    	for(int j = 0; j < res[i].size(); j++) {
    		cout << res[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;

    return 0;
}


