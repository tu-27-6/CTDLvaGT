#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

int partition(int a[], int l, int r, int key) {
	int il = l, ir = r;
	while(il <= ir) {
		while(a[il] < key) il++;
		while(a[ir] > key) ir--;
		
		if(il <= ir) {
			swap(a[ir], a[il]);
			il++; ir--;
		}
	}
	
	return il;
}

void process(int a[], int l, int r) {
	if(l < r) {
		int key = a[(l + r) / 2];
	
		int k = partition(a, l, r, key);
	
		process(a, l, k - 1);
		process(a, k, r);	
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	
	process(a, 0, n - 1);
	
	for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}


