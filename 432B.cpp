////mandeep singh @msdeep14
//
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
#define frn0(i,a,b) for(int i=b-1;i>=0;i--)
#define frn1(i,a,b) for(int i=b;i>=a;i--)
using namespace std;
const int asize= 100005;
const int  mod = 1000000007;
long long int mx=-inf;
long long int mi=inf;
ll x[100005],y[100005];
ll home[100005],away[100005];
ll cnt[100005];
int main(){
	ll n;
	cin>>n;
	fr1(i,1,n){
		cin>>x[i]>>y[i];
	}
	fr1(i,1,n){
		cnt[x[i]]++;
	}
	fr1(i,1,n){
		home[i]=n-1;
		home[i]+=cnt[y[i]];
		away[i]=2*(n-1)-home[i];
	}
	fr1(i,1,n){
		cout<<home[i]<<" "<<away[i]<<endl;
	}
	return 0;
}
