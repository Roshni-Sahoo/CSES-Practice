#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;

	for(int i=1; i<=n; i++)
		cout<<i*i*(i*i-1)/2-4*(i-1)*(i-2)<<endl;

	return 0;
}