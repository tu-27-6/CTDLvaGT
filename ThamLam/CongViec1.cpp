#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

struct job {
	int start, finish;
};

bool comp(job a, job b) {
	return a.finish < b.finish;
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
    	job a[n];
    	for(int i = 0; i < n; i++) {
    		cin >> a[i].start;
		}
		for(int i = 0; i < n; i++) {
    		cin >> a[i].finish;
		}
		sort(a, a + n, comp);
		
		int d = 1, i = 0;
		for(int j = 1; j < n; j++) {
			if(a[j].start >= a[i].finish) {
				d++;
				i = j;
			}
		}
		
		cout << d << endl;
	}

    return 0;
}


