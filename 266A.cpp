#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,l=0;
	string a;
	cin>>n;
	cin>>a;
	for (int i=0;i<n-1;i++) {
		if (a[i] == a[i+1]) {
			l++;
		}
	}
	cout<<l;
	return 0;
}