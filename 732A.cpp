//mandeep singh @msdeep14
//702A
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
ll arr[asize],brr[asize];
int main(){
	ll n;
	ll ans;
	cin>>n;
	fr0(i,0,n) cin>>arr[i];
	brr[0]=1;
	fr0(i,1,n){
		if(arr[i]>arr[i-1]){
			brr[i]=brr[i-1]+1;
		}
		else brr[i]=1;
	}
	fr0(i,0,n){
		if(brr[i]>mx) mx=brr[i];
	}
	cout<<mx<<endl;
	return 0;
}
