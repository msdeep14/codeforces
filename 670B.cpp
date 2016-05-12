//
#include<iostream>
#define ll long long int
using namespace std;
int main(){
	ll n,k;
	cin>>n>>k;
	ll arr[100005];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	ll count=0,flag=0;
	/*
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			count++;
			if(count==k){
				cout<<arr[j];
				flag=1;
				break;
			}
		}
		if(flag==1){
			break;
		}
	}
	*/
	ll temp=0;
	ll x=0;
	for(int i=1;i<=n;i++){
		temp=count;
		count+=i;
		if(count==k){
			cout<<arr[i];
			break;
		}
		else if(count>k){
			for(int j=1;j<=i;j++){
				temp++;
				if(temp==k){
					cout<<arr[j];
					flag=1;
					break;
				}
				if(flag==1)
					break;
			}
			
		}
	}
	return 0;
}
