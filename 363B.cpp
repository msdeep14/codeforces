//363B
#include<iostream>
using namespace std;
int main()
{
	int n,k;
	int arr[150005];
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	int min=0;
	for(int i=1;i<=k;i++)
	{
		min+=arr[i];
	}
	int x=min;
	int temp=0;
	int j=1;
	int i;
	for( i=k+1;i<=n;i++)
	{
		temp=x+arr[i]-arr[i-k];
		if(temp<min)
		{
			j=i-k+1;
			min=temp;
		}
		x=temp;
	}
	cout<<j;
	return 0;
}
