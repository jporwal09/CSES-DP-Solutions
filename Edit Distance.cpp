/* It's a shot in the dark
 				But I will make it */
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
	string s,t;
	cin >>s>>t;
	int n =s.length();
	int m= t.length();
	vector<vector<int> >dp(n+1,vector<int>(m+1,0));
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0){
				dp[i][j]=j;
			}
			else if(j==0){
				dp[i][j] =i;
			}
			else if(s[i-1]==t[j-1]){
				dp[i][j]=dp[i-1][j-1];
			}
			else{
				dp[i][j]= 1+ min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
			}
			
		}
	} 
cout <<dp[n][m]<<"\n";
}
