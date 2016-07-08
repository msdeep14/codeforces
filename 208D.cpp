//208D
#include<iostream>
#define ll long long int
using namespace std;
int main(){
	ll n,a,b,c,d,e;
	ll arr[55];
	ll sum=0;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>arr[i];
	cin>>a>>b>>c>>d>>e;
	ll brr[6]={0};
	ll x;
	arr[0]=0;
	for(int i=1;i<=n;i++){
		arr[i]+=arr[i-1];
		sum=0;
		if(arr[i]>=e){
			x=arr[i]/e;
			brr[5]+=arr[i]/e;
			sum+=arr[i]%e;
			arr[i]-=e*x;

		}
		if(arr[i]>=d){
            x=arr[i]/d;
			brr[4]+=arr[i]/d;
			sum+=arr[i]%d;
			arr[i]-=d*x;
		}
		if(arr[i]>=c){
		    x=arr[i]/c;
			brr[3]+=arr[i]/c;
			sum+=arr[i]%c;
            arr[i]-=c*x;
		}
		if(arr[i]>=b){
            x=arr[i]/b;
			brr[2]+=arr[i]/b;
			sum+=arr[i]%b;
            arr[i]-=b*x;
		}
		if(arr[i]>=a){
            x=arr[i]/a;
			brr[1]+=arr[i]/a;
			sum+=arr[i]%a;
            arr[i]-=a*x;
		}
	}
	for(int i=1;i<=5;i++) cout<<brr[i]<<" ";
	cout<<endl;
	cout<<arr[n];
	return 0;
}
