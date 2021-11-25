#include<iostream>
using namespace std;
#pragma GCC optimize("Ofast")


int n, a[100];

void setUp() {
    for(int i = 1; i <= n; i++) {
        a[i] = i;
    }
}

void print() {
    for(int i = 1; i <= n; i++) {
        cout << a[i];
    }
}

int check = 1;
void process() {
    int i = n - 1;
    while(i > 0 && a[i] > a[i + 1]) i--;

    if(i <= 0) check = 0;
    else {
        int j = n;
        while(a[j] < a[i]) j--;
        swap(a[j], a[i]);

        int l = i + 1, r = n;
        while(l < r) {
            swap(a[l], a[r]);
            l++; r--;
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
        setUp();
        do{
            print();
            cout << ' ';
            process();
        }while(check == 1);
        check = 1;
        cout << endl;
    }

    return 0;
}