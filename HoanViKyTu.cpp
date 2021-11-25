#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int a[100];
int check[100];
string s;

void Try(int i) {
	for(int j = 0; j < s.size(); j++) {
		if(!check[j]) {
			a[i] = j;
			check[j] = 1;
			if(i == s.size()) {
				for(int l = 1; l <= s.size(); l++) cout << s[a[l]];
				cout << " ";
			}
			else Try(i + 1);
			check[j] = 0;
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
    	cin >> s;
    	for(int i = 0; i < 100; i++) check[i] = 0;
    	Try(1);
    	cout << endl;
	}

    return 0;
}
