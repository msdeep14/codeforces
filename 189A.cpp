//
//
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	int n,a,b,c,x,y,z,temp;
	int dp[4001];
	int arr[4001];
	memset(arr,0,4001);
	memset(dp,0,4001);
	cin>>n>>a>>b>>c;
	arr[a]=1;
	arr[b]=1;
	arr[c]=1;
	int m=min(a,b);
	int p=min(m,c);
	if(p==1)
	{
		cout<<n;
		exit(0);
	}
	for(int i=p;i<=n;i++)
	{
		x=1;
		y=i-1;
		while(x<=y)
		{
			if(dp[x]!=0 && dp[y]!=0)
			{
				temp=dp[x]+dp[y];
				if(temp>dp[i])
				{
					dp[i]=temp;
				}
			}
			else if(arr[i]==1)
			{
				dp[i]=1;
			}
			x++;
			y--;
		}

	}
	cout<<dp[n];
	return 0;
}
