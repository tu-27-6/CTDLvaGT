#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int f, n, k, a[1000];

void init() {
    cin >> n;
    k = 1;
    a[k] = n;
}

void print() {
    for(int i = 1; i <= k; i++) {
        if(i == 1) cout << '(';
        cout << a[i];
        if(i < k) cout << ' ';
        else cout << ") ";
    }
}

void sinh() {
    int i, j, R, S, D;
    i = k;
    while(i > 0 && a[i] == 1) i--;
    if(i > 0) {
        a[i] -= 1;
        D = k + i - 1;
        R = D / a[i];
        S = D % a[i];
        k = i;

        if(R > 0) {
            for(j = i + 1; j <= i + R; j++) 
                a[j] = a[i];
            k += R; 
        }
        if(S > 0) {
            k++;
            a[k] = S;
        }
    }
    else f = 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        init();
        f = 1;
        if(n == 0) {
            cout << '(' << 0 << ') ';
            return 0;
        }
        while(f) {
            print();
            sinh();
        }

        cout << endl;
    }
    
    return 0;
}

