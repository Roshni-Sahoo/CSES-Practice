#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){

	int tests;
	cin>>tests;

	for(int t=1; t<=tests; t++){
		int x,y;
		cin>>x>>y;

		int MAX=max(x,y);
		int MIN=min(x,y);

		if((MAX%2==0) and (MAX==x))
			cout<<MAX*MAX-MIN+1;
		else if((MAX%2==1) and (MAX==x))
			cout<<(MAX-1)*(MAX-1)+MIN;
		else if((MAX%2==0) and (MAX==y))
			cout<<(MAX-1)*(MAX-1)+1+MIN-1;
		else
			cout<<MAX*MAX-MIN+1;
		cout<<endl;
	}

	return 0;
}