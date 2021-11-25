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

int tsearch(int a[], int l, int r, int x) {
	if(l >= r) return -1;
	
	int m1 = l + (r - l) / 3;
	int m2 = l + 2 * (r - l) / 3;
	
	if(a[m1] == x) return m1;
	else if(a[m2] == x) return m2;
	else if(a[m1] > x) return tsearch(a, l, m1 - 1, x);
	else if(a[m2] < x) return tsearch(a, m2 + 1, r, x);
	else return tsearch(a, m1, m2, x);
	
}

void process() {
	int n = 10;
	int k = 2;
	int a[] = {5, 4, 1, 3, 2, 6, 7, 9, 10, 11};
	sort(a, a + n);
	int l = 0, r = n - 1;
	
	cout << tsearch(a, l, r, k) << endl;
}

int main() {
	speedup();
    process();

    return 0;
}



