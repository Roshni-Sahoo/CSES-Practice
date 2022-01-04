#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){

	int n,ans;
	cin>>n;

	int arr[n]={0};
	for(int i=0; i<n-1; i++){
		int x;
		cin>>x;
		arr[x-1]=x;
	}
	for(int i=0; i<n; i++){
		if(arr[i]==0)
			ans=i+1;
	}
	cout<<ans<<endl;

	return 0;
}