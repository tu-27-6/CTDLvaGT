#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;
int n;
int a[100][100];
int check[100];
int path[100], res[100];
int MIN = INT_MAX, cost = 0;

void print() {
	cout << MIN;
}

void Try(int i) {
	if(i == n) {
		if(cost + a[path[i - 1]][path[0]] < MIN) {
			MIN = cost + a[path[i - 1]][path[0]];
		}
	}
	else {
		for(int j = 0; j < n; j++) {
			if(check[j] == 0 && cost + a[path[i - 1]][j] < MIN) {
				check[j] = 1;
				path[i] = j;
				cost += a[path[i - 1]][j];
				Try(i + 1);
				check[j] = 0;
				cost -= a[path[i - 1]][j];
			}
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	
	check[0] = 1, path[0] = 0;
	Try(1);
	print();
	
    return 0;
}


