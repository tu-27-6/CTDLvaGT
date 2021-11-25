#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int n, k, a[100];

void print() {
    for(int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << endl;
}

void Try(int i) {
    for(int j = 0; j <= 1; j++) {
        a[i] = j;
        if(i == n) {
            int dem = 0;
            for(int l = 1; l <= n; l++)
                if(a[l] == 1) dem++;
            if(dem == k) print();
        }
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
    }
    
    return 0;
}

