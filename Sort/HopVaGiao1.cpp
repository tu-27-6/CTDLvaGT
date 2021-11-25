/*        			 adidasfat
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
		int n, m;
		cin >> n >> m;
		vector<int> v1(n);
		vector<int> v2(m);
		
		for(int i = 0; i < n; i++) cin >> v1[i];
		for(int i = 0; i < m; i++) cin >> v2[i];
		
		set<int> s;
		vector<int> v;
		for(int i = 0; i < n; i++) {
			s.insert(v1[i]);
			v.push_back(v1[i]);
		}
		for(int i = 0; i < m; i++) {
			s.insert(v2[i]);
			v.push_back(v2[i]);
		}
		
		vector<int> res1(s.begin(), s.end());
		for(int i = 0; i < res1.size(); i++) cout << res1[i] << " ";
		
		cout << endl;
		
		sort(v.begin(), v.end());
		for(int i = 0; i < v.size() - 1; i++) {
			 if(v[i] == v[i + 1]) cout << v[i] << " "; 
		}
		
		cout << endl;
    }
}

int main() {
	speedup();
    process();

    return 0;
}


