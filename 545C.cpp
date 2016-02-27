//545C
#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int n,count=2;
	cin>>n;
	int arr[100005],brr[100005];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i]>>brr[i];
	}
	arr[n]=INT_MAX;
	for(int i=1;i<n-1;i++)
	{
		if(arr[i]-arr[i-1]>brr[i])
		{
			count++;
		}
		else if(arr[i+1]-arr[i]>brr[i])
		{
			arr[i]+=brr[i];
			count++;
		}
		
	}
	if(n==1)
		cout<<"1";
	else
		cout<<count;
	return 0;
}
