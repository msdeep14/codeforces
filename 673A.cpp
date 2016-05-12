//prob 0
#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[100];
	cin>>n;
	for(int i=1;i<=n;i++) 
		cin>>arr[i];
	int x=0;
	int flag=0;
	for(int i=1;i<=n;i++){
		if((arr[i]-x)>15){
			cout<<(x+15);
			flag=1;
			break;
		}
		x=arr[i];
	}
	if(flag==0){
		if(x+15>90)
			cout<<"90";
		else
		cout<<x+15;
	}
	return 0;
}
