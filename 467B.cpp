//467B
#include<iostream>
using namespace std;
int arr[1005];
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int count=0;
	for(int i=1;i<=m+1;i++) cin>>arr[i];
	for(int i=1;i<=m;i++){
		if(__builtin_popcount(arr[m+1]^arr[i])<=k)count++;
	}
	cout<<count;
	return 0;
}
