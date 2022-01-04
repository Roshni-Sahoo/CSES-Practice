#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	int count=0,m=arr[0];
	for(int i=1; i<n; i++){
		if(arr[i-1]>arr[i]){
			count+=(arr[i-1]-arr[i]);
			arr[i]+=(arr[i-1]-arr[i]);
		}
	}
	cout<<count<<endl;

	return 0;
}