//368B
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i,j,m,n;
	int a[100002];
	int l[100002];
	int arr[100002];
	int brr[100002];
	cin>>n>>m;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=m;i++)
		cin>>l[i];
	memset(arr,0,1000);
	brr[n+1]=0;
	for(i=n;i>0;i--)
	{
		int j=a[i];
		if(arr[j]==0)
		{
			brr[i]=brr[i+1]+1;
			arr[j]=1;
		}
		else{
			brr[i]=brr[i+1];
		}
	}
	for(i=1;i<=m;i++)
		cout<<brr[l[i]]<<endl;
		return 0;
}
