//492B
#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long int
using namespace std;
int main(){
	ll n,l;
	double d=-1,x;
	ll arr[1005];
	cin>>n>>l;
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	d=(double)(arr[0]-0);
	for(int i=0;i<n-1;i++){
		x=(double)(arr[i+1]-arr[i])/2;
		if(x>d) d=x;
	}
	x=(double)(l-arr[n-1]);
	if(x>d) d=x;
	printf("%.10f",d);
	return 0;
}
