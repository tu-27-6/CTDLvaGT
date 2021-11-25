#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int n, len, a[100];

void Try(int k) {
    int i, j;
    if(k > (n + 1) / 2) {
        for(j = 1; j <= (n + 1) / 2; j++) cout << a[j] << "                      ";
        for(int j = len; j >= 1; j--) cout << a[j] << "                      ";
        cout << endl;
        return;
    }
    for(int i = 0; i <= 1; i++) {
        a[k] = i;
        Try(k + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    len = (n % 2) ? ((n - 1) / 2) : (n / 2);
    Try(1);

    return 0;
}

// Nhận xét:có 2^[(n+1)/2] số thoả mãn
// một số thuận nghịch được xác định khi biết [(n+1)/2] chữ số đầu tiên.