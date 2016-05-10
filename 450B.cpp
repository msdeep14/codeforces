//450B
#include<iostream>
#define mod 1000000007
#define ll long long int
using namespace std;
int main(){
	ll x,y,n,z,f;
	ll arr[7];
	cin>>x>>y>>n;
	arr[1]=(x+mod)%mod;
	arr[2]=(y+mod)%mod;
	arr[3]=(y-x+mod)%mod;
	arr[4]=(-x+mod)%mod;
	arr[5]=(-y+mod)%mod;
	arr[6]=(x-y+mod)%mod;
	if(n<=6) cout<<(arr[n]+mod)%mod;
	else{
		z=n%6;
		if(z==0) cout<<(arr[6]+mod)%mod;
		else cout<<(arr[z]+mod)%mod;
		
	}
	return 0;
}
