#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

void process(string &s) {
    int i = s.size() - 1;

    while(i > 0 && s[i] == '0') {
        i--;
    }

    if(i <= 0) {
        for(int i = 0; i < s.size(); i++) {
            cout << '1';
        }
        cout << endl;
    }
    else {
        s[i] = '0';
        for(int j = s.size() - 1; j > i; j--) {
            s[j] = '1';
        }

        cout << s;
        cout << endl;
    }
    
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

