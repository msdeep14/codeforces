//474D
#include<iostream>
#define ll long long
using namespace std;
int main()
{
	ll int t,n,k,a,b;
	ll int arr[100005];
	ll int sum[100005];
	cin>>t>>k;
	arr[0]=1;
	for(int i=1;i<100005;i++)
	{
		if(i>=k)
		{
			arr[i]=(arr[i-1] + arr[i-k])%1000000007;
		}
		else
		{
			arr[i]=arr[i-1];
		}
	}
	//sum[0]=0;
	for(int i=1;i<100005;i++)
	{
		sum[i]=(sum[i-1] + arr[i])%1000000007;
	}
	
	while(t--)
	{
		cin>>a>>b;
		cout<<(sum[b]-sum[a-1] + 1000000007)%1000000007<<endl;
	}
	return 0;
}
