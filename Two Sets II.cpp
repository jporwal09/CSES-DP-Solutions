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
    ll n;
    cin >>n;
    ll sum = n* (n+1)/2;
    if(sum%2){
    	cout <<0<<"\n";
    	return 0;
	}
	sum/=2;
	vector<vector<ll> >dp(n+1,vector<ll>(sum+1,0));
	for(ll i=0;i<=n;i++){
		dp[i][0]=1;
	}
	for(ll i=1;i<n;i++){
		for(ll j=1;j<=sum;j++){
			if(i<=j){
				dp[i][j] = (dp[i][j]+dp[i-1][j-i])%mod;
			}
			dp[i][j]= (dp[i][j]+dp[i-1][j])%mod;
		}
	}
	
/*	for(int i=0;i<=n;i++){
		for(int j=0;j<=sum;j++){
			cout <<dp[i][j]<<" ";
		}
		cout <<'\n';
	}*/
	
	cout <<dp[n-1][sum]<<"\n";
	
	
	
}
