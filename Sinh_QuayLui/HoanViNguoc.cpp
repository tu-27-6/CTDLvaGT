#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[100];
        int dem = 1;
        for(int i = 0; i < n; i++) {
            a[i] = i + 1;
            dem *= (i + 1);
        }
        
        while(dem--) {
            prev_permutation(a, a + n);
            for(int i = 0; i < n; i++) {
                cout << a[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}