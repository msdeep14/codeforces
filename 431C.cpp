
//431C
#include<iostream>
#include<algorithm>
using namespace std;
const int mod= 1e9+7;
int dp[100][2];
void add(int &a,int b){
	a+=b;
	if(a>=mod) a-=mod;
}
int main(){
	int n,k,d;
	cin>>n>>k>>d;
	dp[0][1]=0;//dp[n][1] contains no. of paths of total wt n with weight>=d;
	dp[0][0]=1;//dp[n][0] contains no. of paths of total wt n with weight strictly less than d (wt<d)
	for(int i=1;i<=n;i++){//create sum from 1 to n;
		dp[i][0]=dp[i][1]=0;
		for(int j=1;j<=k;j++){//travel for k children for every sum from 1 to n;
			if(i-j<0) break;//if wt of children is greater than sum then break;
			if(j<d){
				add(dp[i][0],dp[i-j][0]);
				add(dp[i][1],dp[i-j][1]);
			}
			else{
				add(dp[i][1],dp[i-j][0]);
				add(dp[i][1],dp[i-j][1]);
			}
		}
	}
	cout<<dp[n][1];
	return 0;
}
