#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,c[20][20],cx[100],x[100],s=0,Min=1000000000,cmin=100000000000;
void nhap(){
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++){
		cin>>c[i][j];
		if(c[i][j]!=0) cmin=min(cmin,c[i][j]);
		
	}
}
void Try(int i){
	if(s+cmin*(n-i+1)>=Min) return;
	for(int j=1;j<=n;j++) {
		if(cx[j]){
			x[i]=j;
			cx[j]=0;
			s+=c[x[i-1]][j];
			if(i==n){
				if(s+c[x[n]][x[1]]<Min) Min=s+c[x[n]][x[1]];
				
			}
			else Try(i+1);
			s-=c[x[i-1]][j];
			cx[j]=1;
		}
	}
}
int main(){
	memset(cx,1,sizeof(cx));
	cx[1]=0;
x[1]=1;
nhap();
Try(2);
cout<<Min;	
cout<<endl;
 }
