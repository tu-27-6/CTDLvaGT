#include<iostream>
using namespace std;

int n, k, a[100];

void setUp() {
    for(int i = 1; i <= k; i++) {
        a[i] = i;
    }
}

void print() {
    for(int i = 1; i <= k; i++) {
        cout << a[i];
    }
}

int check = 1;
void process() {
    int i = k;
    while(i > 0 && a[i] == n - k + i) i--;
    if(i <= 0) check = 0;
    else {
        a[i]++;
        for(int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        setUp();
        do{
            print();
            cout << " ";
            process();
        }while(check == 1);
        check = 1;
        cout << endl;
    }
    return 0;
}