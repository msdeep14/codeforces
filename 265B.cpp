//265B
#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[100005];
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	int t=arr[0]+1;
	for(int i=1;i<n;i++){
		if(arr[i]<arr[i-1]) t+=arr[i-1]-arr[i]+2;
		else if(arr[i]>arr[i-1]) t+=arr[i]-arr[i-1]+2;
		else t+=2;
	}
	cout<<t<<endl;
	return 0;
}
