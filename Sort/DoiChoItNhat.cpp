/*         cau troi khan phat cho code cua con chay duoc 
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
		int a[n];
		
		for(int i = 0; i < n; i++) cin >> a[i];
		
		int res = 0;
		for(int i = 0; i < n - 1; i++) {
			int tmp = i;
			int min = a[i];
			for(int j = i + 1; j < n; j++) {
				if(a[j] < min) {
					min = a[j];
					tmp = j;
				}
			}
			
			swap(a[i], a[tmp]);
			if(tmp != i) res++;
		}
    	
    	cout << res << endl;
	}
  		

    return 0;
}


