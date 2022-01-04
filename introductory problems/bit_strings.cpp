#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007 

int32_t main(){

	int n;
	cin>>n;
	int ans=1;
	for(int i=0; i<n; i++)
		ans=(ans*2)%mod;
	cout<<ans<<endl;

	return 0;
}