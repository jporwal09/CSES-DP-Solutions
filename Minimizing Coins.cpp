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
     	int n,s;
	cin >>n >>s;
	int a[n];
	for(int i=0;i<n;i++)
	cin >>a[i];
	
	vector <int> v(s+1,1e9);
	v[0]=0;
	for(int i=1;i<=s;i++){
		for(int j=0;j<n;j++){
			if(i>=a[j])
			v[i]= min(v[i],v[i-a[j]]+1);
		}
	}
	if(v[s]==1e9)
	cout << -1 <<"\n";
	else
	cout << v[s]<<endl;
}

