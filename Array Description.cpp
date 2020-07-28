/* It's a shot in the dark
 				But I will make it */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int inf=1000000000;
const ll mod = 1e9+7;
 
bool cmp(pair<int,int> a, pair<int,int> b){
	return a.second<b.second;
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
   ll n,m;
   cin >>n>>m;
   ll a[n];
   for(int i=0;i<n;i++){
   	cin >>a[i];
   }
   vector<vector<ll> >dp(n,vector<ll>(m+1,0));    
   if(a[0]==0){
   	for(int i=1;i<=m;i++) dp[0][i]=1;
   }
   else{
   	dp[0][a[0]]=1;
   	
   }
   for(int i=1;i<n;i++){
   	
   		if(a[i]==0){
   			for(int j=1;j<=m;j++){
			   dp[i][j] = (dp[i][j]+dp[i-1][j])%mod;
			   
			   if(j-1>=1){
			   	 dp[i][j] = (dp[i][j]+dp[i-1][j-1])%mod;
			   }
			   if(j+1<=m){
			   	 dp[i][j] = (dp[i][j]+dp[i-1][j+1])%mod;
			   }
			   			   }
		   }
	   else{
	   	dp[i][a[i]] = (dp[i][a[i]]+dp[i-1][a[i]])%mod;
			   
			   if(a[i]-1>=1){
			   	 dp[i][a[i]] = (dp[i][a[i]]+dp[i-1][a[i]-1])%mod;
			   }
			   if(a[i]+1<=m){
			   	 dp[i][a[i]] = (dp[i][a[i]]+dp[i-1][a[i]+1])%mod;
			   }
	   	
	   	
	   	
	   }
   }
   
  /* for(int i=0;i<n;i++){
   	for(int j=1;j<=m;j++){
   		cout <<dp[i][j]<<" ";
	   }
	   cout <<"\n";
   }*/
   
   ll ans=0;
   for(int i=1;i<=m;i++){
   	ans = (ans+dp[n-1][i])%mod;
   }
   
   cout <<ans<<'\n';
}
