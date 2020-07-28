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
	int n;
	cin >>n;
	int a[n+1];
	int sum=0;		
	for(int i=1;i<=n;i++) cin >>a[i], sum+=a[i];
	
	vector<vector<int> > dp(n+1,vector<int>(sum+1,0));
	
	for(int i=0;i<=n;i++){
		dp[i][0]=1;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(j-a[i]>=0){
				dp[i][j]|=dp[i-1][j-a[i]]; 
			}
			dp[i][j]|=dp[i-1][j];
		}
	}
	
	int cnt=0;
	vector<int>v;
	for(int i=1;i<=sum;i++){
		if(dp[n][i]==1)v.push_back(i);
	}
	
	cout <<v.size()<<"\n";
	for(int i=0;i<v.size();i++) cout <<v[i]<<' ';
    	
 
}
