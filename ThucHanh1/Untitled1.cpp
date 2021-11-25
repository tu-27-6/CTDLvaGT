#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;
//10011001

void process(string &s) {
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '1') {
		s[i] = '0';
		i--;
	}
	if(i >= 0) s[i] = '1';
	cout << s << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
    	string s;
    	cin >> s;
    	process(s);
	}

    return 0;
}


