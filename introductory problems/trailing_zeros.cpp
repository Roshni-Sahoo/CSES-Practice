#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;

	int add=n,ans=0;

	while(add>=5){
		add/=5;
		ans+=add;
	}
	cout<<ans<<endl;

	return 0;
}