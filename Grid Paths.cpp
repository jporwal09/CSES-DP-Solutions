#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int inf=1000000000;
const int mod = 1e9+7;
bool cmp(pair<int,int> a, pair<int,int> b){
	return a.second<b.second;
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      int n;
      cin >>n;
      char a[n][n];
      ll dp[n][n];
      for(int i=0;i<n;i++){
      	for(int j=0;j<n;j++){
      		cin >>a[i][j];
      		dp[i][j]=0;
		  }
	  }
	  if(a[0][0]=='*'||a[n-1][n-1]=='*'){
	  	cout<<0<<"\n";
	  	return 0;
	  }
	  dp[0][0]=1;
	  for(int i=0;i<n;i++){
	  	for(int j=0;j<n;j++){
	  		if(a[i][j]=='.'){
			  
	  		if(i==0&&j==0){
	  			continue;
			  }
			else if(i==0){
				dp[i][j]= dp[i][j-1];
			}
			else if(j==0){
				dp[i][j]=dp[i-1][j];
			}  
		 else{
		 	dp[i][j] = (dp[i-1][j]+dp[i][j-1])%mod;
		 }	
			
		}
		  }
	  }
	  
	  cout <<dp[n-1][n-1]<<'\n';	  
}
