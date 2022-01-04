#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){

	int n;
	cin>>n;

	int arr[n];
	
	if(n==1)
		cout<<1<<endl;
	else if(n<=3)
		cout<<"NO SOLUTION"<<endl;
	else if(n==4)
		cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
	else{
		for(int i=0; i<n; i+=2){
			cout<<i+1<<" ";
		}
		for(int i=1; i<n; i+=2)
			cout<<i+1<<" ";
	}
	cout<<endl;


	return 0;
}