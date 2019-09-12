#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,k,c;
	cin>>n>>k;
	int a[n];
	for (int i =0;i<n;i++){
		cin>>a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i]>=a[k] && a[i]>0) {
			c++;
		}
	}
	cout<<c;
	return 0;
}