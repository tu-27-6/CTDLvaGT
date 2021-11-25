#include<bits/stdc++.h>
using namespace std;

void process(int a[], int n) {
    int dem = 1;
    for(int i = 0; i < n; i++) {
        bool check = true;
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                check = false;
                swap(a[j], a[j + 1]);
            }
        }
        if(check) break;
        cout << "Buoc " << dem << ':' << ' ';
        for(int i = 0; i < n; i++) {
            cout << a[i] << ' ';
        }
        dem++;
        cout << endl;
        
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    process(a, n);
    return 0;
}