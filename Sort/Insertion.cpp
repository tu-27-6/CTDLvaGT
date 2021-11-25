#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

void process(int a[], int n) {
    vector<int> v1;
    for(int i = 0; i < n; i++) {
        v1.push_back(a[i]);
        sort(v1.begin(), v1.end());
        cout << "Buoc " << i << ": ";
        for(int j = 0; j < v1.size(); j++) {
            cout << v1[j] << " ";
        }
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