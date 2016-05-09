//451B
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,l=1,r;
	int arr[100005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<n;i++){
		if(arr[i]>arr[i+1]){
			l=i;
			break;
		}
	}
	int i;
	for(i=l;i<n;i++){
		if(arr[i]<arr[i+1]){
			r=i;
			break;
		}
	}
	if(i==n) r=n;
	reverse(arr+l,arr+r+1);
	for(i=1;i<n;i++){
		if(arr[i]>arr[i+1]) break;
	}
	if(i!=n) cout<<"no";
	else cout<<"yes\n"<<l<<" "<<r;
	return 0;
}
