//545A
#include<iostream>
using namespace std;
int main()
{
	int n;
	int m[100][100];
	int arr[105];
	int x=0;
	int count=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>m[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(m[i][j]==1 || m[i][j]==3)
			{
				break;
			}
			if(j==n-1 && m[i][j]!=1 && m[i][j]!=3)
			{
				count++;
				arr[x]=i+1;
				x++;
			}
		}
	}
	cout<<count<<endl;
	for(int i=0;i<x;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
