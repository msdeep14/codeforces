//mandeep singh @msdeep14
//651A
#include<bits/stdc++.h>
#define ll long long int
#define fe first
#define se second
#define pb push_back
#define mp make_pair
#define inf INT_MAX
#define vi vector<int>
#define vl vector<ll>
#define si set<int>
#define msi multiset<int>
#define fr0(i,a,b) for(int i=a;i<b;i++)
#define fr1(i,a,b) for(int i=a;i<=b;i++)
#define frn0(i,a,b) for(int i=b-1;i>=a;i--)
#define frn1(i,a,b) for(int i=b;i>a;i--)
using namespace std;
const int asize= 100005;
const int  mod = 1000000007;
long long int mx=-inf;
long long int mi=inf;
int main(){
	ll n,m,ans=0;
	cin>>n>>m;
	ll flag=1;
	while(flag){
		if(n==1 && m==1){
			flag=0;
			break;
		}
		if(n<=m){
			n+=1;
			m-=2;
		}
		else if(m<n){
			m+=1;
			n-=2;
		}
		ans++;
		if(n==0 || m==0){
			flag=0;
			break;
		}
		
	}
	cout<<ans<<endl;
	return 0;
}
