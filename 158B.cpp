#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for (int j=0;j<n;j++){
		cin>>a[j];
	}
	sort(a,a+n);
	int i=n-1,k=0,c=0;
	while (k!=i){
		if (a[k]+a[i]<=4){
			a[i]=a[k]+a[i];
			k++;
		} else {
			i--;
			c++;
		}
	}
	cout<<c+1;
	return 0;
}