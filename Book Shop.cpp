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
       int n,x;
       cin >>n>>x;
       int c[n],p[n];
       for(int i=0;i<n;i++) cin >>c[i];
       for(int i=0;i<n;i++) cin >>p[i];
       int dp[n+1][x+1];
       for(int i=0;i<=n;i++){
       	 for(int j=0;j<=x;j++){
       	 	if(i==0||j==0){
       	 		dp[i][j]=0;
				}
			else if(c[i-1]<=j){
				dp[i][j]= max(p[i-1]+ dp[i-1][j-c[i-1]], dp[i-1][j]);
			}	
			else{
				dp[i][j]= dp[i-1][j];
			}
			}
	   }
	    
	   
	   cout <<dp[n][x]<<'\n';
}
