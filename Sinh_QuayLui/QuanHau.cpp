#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int n, x[100], a[100], xuoi[200], nguoc[200];
int dem = 0;

void Try(int i) {
    for(int j = 1; j <= n; j++) {
        if(a[j] && xuoi[i - j + n] && nguoc[i + j - 1]) {
            x[i] = j;
            a[j] = 0; xuoi[i - j + n] = 0; nguoc[i + j - 1] = 0;
            if(i == n) dem++;
            else Try(i + 1);
            a[j] = 1; xuoi[i - j + n] = 1; nguoc[i + j - 1] = 1;
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
        cin >> n;
        for(int i = 1; i < 200; i++) {
            if(i <= 100) a[i] = 1;
            xuoi[i] = 1; nguoc[i] = 1;
        }

        Try(1);

        cout << dem << endl;

        dem = 0;
    }
    
    return 0;
}

