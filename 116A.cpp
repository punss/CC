#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,p=0,a,b,max;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		p=p-a+b;
		p>max ? max=p : max=max;
	}
	cout<<max;
	return 0;
}