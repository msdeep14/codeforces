//mandeep singh @msdeep14
//
#include<bits/stdc++.h>
#define ll long long int
#define fi first
#define se second
#define mod 1000000007
#define pb push_back
#define asize 100005
#define mp make_pair
#define vi vector<int>
#define vl vector<ll>
#define si set<int>
#define msi multiset<int>
#define fr0(i,a,b) for(int i=a;i<b;i++)
#define fr1(i,a,b) for(int i=a;i<=b;i++)
#define frn0(i,a,b) for(int i=b-1;i>=0;i--)
#define frn1(i,a,b) for(int i=b;i>=a;i--)
using namespace std;
ll arr[100005],l[100005],r[100005];
int main(){
	ll n;
	
	cin>>n;
	fr1(i,1,n) cin>>arr[i];
	l[0]=0,r[0]=0,arr[0]=0;
	r[n+1]=l[n+1]=0;
	arr[n+1]=INT_MAX;
	fr1(i,1,n){
		if(arr[i]>arr[i-1])l[i]=l[i-1]+1;
		else l[i]=1;
	}
	frn1(i,1,n){
		if(arr[i]<arr[i+1]) r[i]=r[i+1]+1;
		else r[i]=1;
	}
	ll ans=-1;
	fr1(i,1,n){
		if(arr[i-1]+1 < arr[i+1])	ans=max(ans,l[i-1]+1+r[i+1]);
		else ans=max(ans,max(l[i-1],r[i+1])+1);
	}
	ans=min(ans,n);
	cout<<ans;
	return 0;
}
