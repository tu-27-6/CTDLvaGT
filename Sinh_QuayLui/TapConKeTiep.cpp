#include<iostream>
using namespace std;

void process(int a[], int n, int k) {
    int i = k;
    while(i > 0 && a[i] == n - k + i) i--;
    
    if(i <= 0) {
        for(int i = 1; i <= k; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
    else {
        a[i]++;
        for(int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
        
        for(int i = 1; i <= k; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[k + 1];
        for(int i = 1; i <= k; i++) {
            cin >> a[i];
        }

        process(a, n, k);
    }

    return 0;
}