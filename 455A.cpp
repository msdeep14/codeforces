//
//
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,x;
	long long int arr[100001],ans[100001];
	cin>>n;
	memset(arr,0,100001);
	for(int i=0;i<n;i++)
	{
		cin>>x;
		arr[x]+=1;
	}
	ans[0]=0;
	ans[1]=arr[1];
	for(int i=2;i<100001;i++)
	{
		ans[i]=max(ans[i-1],ans[i-2] + i*arr[i]);
	}
	cout<<ans[100000];
	return 0;
}
