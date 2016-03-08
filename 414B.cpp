//414B
#include<iostream>
#define mod 1000000007
long long int dp[2001][2001];
using namespace std;
int main()
{
	long long int i,j,k,l,n,sum=0;
	cin>>n>>k;
	for(i=0;i<=k;i++)
		for(j=1;j<=n;j++)
			dp[i][j]=0;
	for(i=0;i<=n;i++)
		dp[1][i]=1;
	for(i=2;i<=n;i++)
		for(j=1;j<=n;j++)
			for(l=j;l<=n;l+=j)
				dp[i][j]=(dp[i][j]+dp[i-1][l])%mod;
			
	for(i=1;i<=n;i++)
	{
		sum=(sum+dp[k][i])%mod;
	}
	cout<<sum<<endl;
	
	//cout<<dp[k+1][1];
}
