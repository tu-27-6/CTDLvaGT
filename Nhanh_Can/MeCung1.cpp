#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int n, a[100][100];
vector<string> res;
int check;

void Try(int i, int j, string s) {
	if(i == 1 && j == 1 && a[i][j] == 0) {
		check = 0;
		return;
	}
	if(i == n && j == n && a[n][n] == 1) {
		res.push_back(s);
		check = 1;
		return;
	}
	
	if(i == n && j == n && a[n][n] == 0) {
		check = 0;
		return;
	}

	if(i < n && a[i + 1][j] == 1) Try(i + 1, j, s + "D");
	if(j < n && a[i][j + 1] == 1) Try(i, j + 1, s + "R");

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
    	cin >> n;
    	for(int i = 1 ; i <= n; i++) {
    		for(int j = 1; j <= n; j++) {
    			cin >> a[i][j];
			}
		}
		Try(1, 1, "");
		if(check == 0) cout << -1;
		else {
			sort(res.begin(), res.end());
			for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
		}
		cout << endl;
		res.clear();
		check = 0;
	}

    return 0;
}


