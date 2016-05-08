//339B
#include<iostream>
#define ll long long
using namespace std;
int main(){
	ll int  n,m,t;
	ll int arr[100005];
	cin>>n>>m;
	for(int i=0;i<m;i++) cin>>arr[i];
	t=arr[0]-1;
	for(int i=1;i<m;i++){
		if(arr[i]>arr[i-1]){
			t+=arr[i]-arr[i-1];
		}
		else if(arr[i]<arr[i-1]){
			t+=(n-arr[i-1]+arr[i]);
		}
		else {
			for(int k=i;k<m-1;k++){
				if(arr[k]==arr[k+1]){
					i++;
				}
				else break;
			}
		}
	}
	cout<<t<<endl;
}
