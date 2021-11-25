#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;
string a, b;

string process() {
	while(a.size() < b.size()) a = "0" + a;
	while(a.size() > b.size()) b = "0" + b;
	
	int n = a.size();
	string res = "";
	int nho = 0;
	for(int i = n - 1; i >= 0; i--) {
		int so = int(a[i] - '0') + int(b[i] - '0') + nho;
		res = char(so%10 + '0') + res;
		nho = so / 10;
	}
	
	if(nho > 0) return char(nho + '0') + res;
	return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;
    
    for(ll i = 0; i < a.size(); i++) if(a[i] == '6') a[i] = '5';
	for(ll i = 0; i < b.size(); i++) if(b[i] == '6') b[i] = '5'; 
	
	cout << process() << " ";
	
	for(ll i = 0; i < a.size(); i++) if(a[i] == '5') a[i] = '6';
	for(ll i = 0; i < b.size(); i++) if(b[i] == '5') b[i] = '6'; 
	
	cout << process() << " ";

    return 0;
}


