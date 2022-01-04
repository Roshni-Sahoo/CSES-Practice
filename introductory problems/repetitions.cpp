#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin>>s;

	int n=s.length();
	int count=0,i=0;
	while(i<n){
		int j=i;
		int len=0;
		while(j<n && s[i]==s[j])
			j++,len++;
		count=max(count,len);
		i=j;
	}
	cout<<count<<endl;

	return 0;
}