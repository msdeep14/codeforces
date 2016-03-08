//103A
#include<iostream>
#define ll long long
using namespace std;
int main()
{
	ll int n;
	ll int arr[110];
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++)
		cin>>arr[i];
	ll int sum=0;
	ll int x=0;
	for(i=1;i<=n;i++)
	{
		if(arr[i]==1)
		{
			sum+=1;
		}
		else
		{
			sum+=(arr[i]-1)*(i-1)+arr[i];
		}
	}
	
	cout<<sum;
	return 0;
}
