#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

struct S {
	int id, dl, pro;
};

bool comp(S a, S b) {
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
    	S a[n];
    	for(int i = 0; i < n; i++) {
    		cin >> a[i].id >> a[i].dl >> a[i].pro;
		}
		sort(a, a + n, comp);
    	
    	int dem = 0, ans = 0;
		int check[2000] = {0};
		for(int i = 0; i < n; i++) {
			while(check[a[i].dl] == 1 && a[i].dl > 0) a[i].dl--;
			if(check[a[i].dl] == 0 && a[i].dl > 0) {
				check[a[i].dl] = 1;
				ans += a[i].pro;
				dem++;
			}
		}
	
		cout << "(" << dem << ": " << ans << ")" << endl;
	}

    return 0;
}


