#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int inf=1000000000;
 
bool cmp(pair<int,int> a, pair<int,int> b){
	return a.second<b.second;
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
       int n;
       cin >>n;
       ll cnt=0;
       while(n>0){
       	int z = n;
       	int x=0;
       	while(z>0){
       		x= max(x,z%10);
       		z/=10;
		   }
		   n-=x;
		   cnt++;
	   }
	   cout << cnt<<'\n';
}
