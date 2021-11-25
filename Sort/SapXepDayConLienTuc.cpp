/*        			   adidasfat
                        _ooOoo_
                       o8888888o
                       88" . "88
                       (| -_- |)
                       O\  =  /O
                    ____/`---'\____
                  .'  \\|     |//  `.
                 /  \\|||  :  |||//  \
                /  _||||| -:- |||||_  \
                |   | \\\  -  /'| |   |
                | \_|  `\`---'//  |_/ |
                \  .-\__ `-. -'__/-.  /
              ___`. .'  /--.--\  `. .'___
           ."" '<  `.___\_<|>_/___.' _> \"".
          | | :  `- \`. ;`. _/; .'/ /  .' ; |
          \  \ `-.   \_\_`. _.'_/_/  -' _.' /
===========`-.`___`-.__\ \___  /__.-'_.'_.-'================
*/

#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

void speedup() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void process() {
	int t;
    cin >> t;
    while(t--) {
		ll n;
		cin >> n;
		ll a[n];
		for(ll i = 0; i < n; i++) cin >> a[i];
		ll b[n];
		for(ll i = 0; i < n; i++) b[i] = a[i];
		
		sort(a, a + n);
		int l, r;
		for(ll i = 0; i < n; i++) {
			if(a[i] != b[i]) {
				l = i + 1;
				break;
			}
		}
		
		for(ll i = n - 1; i >= 0; i--) {
			if(a[i] != b[i]) {
				r = i + 1;
				break;
			}
		}
		
		cout << l << " " << r << endl;
    }
}

int main() {
	speedup();
    process();

    return 0;
}



