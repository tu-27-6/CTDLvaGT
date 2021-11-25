#include<iostream>
using namespace std;

void setUp(char a[], int n) {
    for(int i = 1; i <= n; i++) {
        a[i] = 'A';
    }
}

void print(char a[], int n) {
    for(int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << " ";
}

void changeA(char a[], int n, int vt) {
    for(int i = vt; i <= n; i++) {
        a[i] = 'A';
    }
}

void sinh(char a[], int n) {
    print(a, n);
    int i = n;
    while(i > 0) {
        if(a[i] == 'B') i--;
        if(a[i] == 'A') {
            a[i] = 'B';
            changeA(a, n, i + 1);
            print(a, n);
            i = n;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        char a[100];
        setUp(a, n);
        sinh(a, n);
        cout << endl;
    }
    return 0;
}