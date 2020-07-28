#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int inf=1000000000;
const int mod = 1e9+7;
bool cmp(pair<int,int> a, pair<int,int> b){
	return a.second<b.second;
}
ll dp[1000006];
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >>n;
 
 dp[0]=1;
 
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=6;j++){
    		if(i-j>=0){
    			dp[i] = (dp[i]+dp[i-j])%mod;
			}
		}
	}
	
	cout <<dp[n]<<"\n";	
	
 
}
