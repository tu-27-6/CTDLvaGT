#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

string s;

void process() {
	int res = 1;
	for(int i = 0; i < s.size(); i++) {
		int l = i, r = i;
		while(l >= 0 && r < s.size()) {
			if(s[l] == s[r]) {
				res = max(res, r - l + 1);
				l--; r++;
			}
			else break;
		}
	}
	
	for(int i = 0; i < s.size(); i++) {
		int l = i, r = i + 1;
		while(l >= 0 && r < s.size()) {
			if(s[l] == s[r]) {
				res = max(res, r - l + 1);
				l--; r++;
			}
			else break;
		}
	}
	
	cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
    	cin >> s;
    	
    	process();
	}

    return 0;
}


