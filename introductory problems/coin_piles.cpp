#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){

	int tests;
	cin>>tests;

	for(int t=1; t<=tests; t++){
		int a,b;
		cin>>a>>b;
		int x=-1,y=-1;
		if((2*a-b)%3==0)
			x=(2*a-b)/3;
		if((2*b-a)%3==0)
			y=(2*b-a)/3;

		if(x>=0 && y>=0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}