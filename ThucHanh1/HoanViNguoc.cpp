#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;
int n;
int a[100];
int check[100];
vector< vector<int> > res;

void Try(int i) {
	for(int j = 1; j <= n; j++) {
		if(check[j] == 0) {
			a[i] = j;
			check[j] = 1;
			if(i == n) {
				vector<int> tmp;
				for(int j = 1; j <= n; j++) tmp.push_back(a[j]);
				
				res.push_back(tmp);
			}
			else Try(i + 1);
			check[j] = 0;
		}
	}
}

void print() {
	for(int i = res.size() - 1; i >= 0; i--) {
		for(int j = 0; j < res[i].size(); j++) {
			cout << res[i][j];
		}
		if(i == 0) cout << "";
		else cout << ",";
	}
	cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
    	res.clear();
    	cin >> n;
    	Try(1);
    	print();
	}

    return 0;
}


