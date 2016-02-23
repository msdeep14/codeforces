//337A
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
	int arr[60];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
		cin>>arr[i];
	sort(arr,arr+m);
	int min=INT_MAX;
	for(int i=0;i<m;i++)
	{
		if(i+n-1<(m))
		{
		if((arr[i+n-1]-arr[i])<min)
		{
			min=arr[i+n-1]-arr[i];
		}
		}
	}
	cout<<min;
	return 0;
}
