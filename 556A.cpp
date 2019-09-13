#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,o=0,z=0;
	string a;
	cin>>n;
	cin>>a;
	for (int i=0;i<n;i++){
		if (int(a[i])==49){
			o++;
		} else {
			z++;
		}
	}
	cout<<(abs(z-o));
	return 0;
}