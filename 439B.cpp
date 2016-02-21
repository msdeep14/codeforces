//
//
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long i,j,n,k,k1;
	long long arr[100000];
	long long sum=0;
	cin>>n>>k;
	k1=k;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	sort(arr,arr+n);
	i=0;
	long long ans=0;
	while(k)
	{
		ans=ans+(arr[i]*k);
		i++;
		k--;
	}
	//int sum=0;
	for(i=0;i<k1;i++)
	{
		sum-=arr[i];
	}
	ans+=sum;
	cout<<ans;
	return 0;
}
