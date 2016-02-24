//580A
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std; 
int main()
{
	int n;
	int arr[100005],count[100005];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(n==1)
	{
		cout<<"1";
		exit(0);
	}
	//memset(count,0,n+2);
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]<=arr[i+1])
		{
			count[i]=1;
		}
		else
		{
			count[i]=0;
		}
	}
	int c=0;
	int temp=0;
	int flag=0;
	for(int i=0;i<n-1;i++)
	{
		if(count[i]==1 )
		{
			c++;
			flag=1;
		}
		else
		{
			c=0;
		}
		if(c>temp)
		{
			temp=c;
		}
	}
	if(flag==1)
		cout<<temp+1;
	else
		cout<<"1";
	return 0;
}
