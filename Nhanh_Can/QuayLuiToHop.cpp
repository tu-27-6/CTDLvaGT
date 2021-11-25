#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

int n, k, a[100];

void print() {
	for(int i = 1; i <= k; i++) cout << a[i];
	cout << " ";
}

void Try(int i) {
	for(int j = a[i - 1] + 1; j <= n - k + i; j++) {
		a[i] = j;
		if(i == k) print();
		else Try(i + 1);
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
    	Try(1);
		print();
    	cout << endl;
	}
    	
    return 0;
}



