#include<bits/stdc++.h>
using namespace std;

int main() {
long long n,k;
cin>>n>>k;
std::vector<long long> v;
for (int i=1;i<=sqrt(n);i++){
  if (n%i==0){
    v.push_back(i);
    if (i!=n/i) {
      v.push_back(n/i);
    }
  }
}
int size = v.size();

if (size<k) {
  cout<<"-1";
  return 0;
} else {
  sort(v.begin(), v.end());
cout<<v[k-1];

  return 0;
}
}
