#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int flag = 1;

int check(char a[], int n) {
    if(a[0] != 'H' || a[n - 1] == 'H') return 0;
    for(int i = 0; i < n - 1; i++) {
        if(a[i] == 'H' && a[i + 1] == 'H') return 0;
    }
    
    return 1;
}

void sinh(char a[], int n) {
    int i = n - 1;
    while(i >= 0 && a[i] != 'A') {
        a[i] = 'A';
        i--;
    }

    if(i < 0) flag = 0;
    else a[i] = 'H';
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
        char a[n];
        for(int i = 0; i < n; i++) {
            a[i] = 'A';
        }

        while(flag) {
            if(check(a, n)) {
                for(int i = 0; i < n; i++) {
                    cout << a[i];
                }
                cout << endl;
            }
            sinh(a, n);
        }
        
        flag = 1;
    }
    
    return 0;
}

