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

struct Node {
	int data;
	Node *next;
	
};

void speedup() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void process() {
	Node *head = new Node();
	head->data = 1;
	head->next = NULL;
	
	Node *second = new Node();
	second->next = NULL;
	second->data = 2;
	
	Node *third = new Node();
	third->data = 3;
	third->next = NULL;
	
	head->next = second;
	second->next = third;
	
	int d = head->data;
	cout << d << endl;
	
	Node *p = head;
	while(p != NULL) {
		d = p->data;
		p = p->next;
		cout << d << "->";
	}	
}

int main() {
	speedup();
    process();

    return 0;
}



