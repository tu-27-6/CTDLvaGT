#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

int n, check[200], c[100][100], x[100], s = 0, MIN = INT_MAX, cmin = INT_MAX;

void Try(int i) {
	if((s + cmin * (n - i + 1)) >= MIN) return;
	for(int j = 1; j <= n; j++) {
		if(check[j]) {
			x[i] = j;
			check[j] = 0;
			s += c[x[i - 1]][x[i]];
			if(i == n) {
				if(s + c[x[n]][x[1]] < MIN) MIN = s + c[x[n]][x[1]];
			}
			else Try(i + 1);
			s -= c[x[i - 1]][j];
			check[j] = 1;
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    for(int i = 1; i <= n; i++) {
    	for(int j = 1; j <= n; j++) {
    		cin >> c[i][j];
    		cmin = min(cmin, c[i][j]);
		}
	}
	
	for(int i = 1; i <= 100; i++) check[i] = 1;
	
	check[1] = 0;
	x[1] = 1;
	Try(2);
	cout << MIN;
	

    return 0;
}


