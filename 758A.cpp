//mandeep singh @msdeep14
//758A
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
	ll n;
	ll arr[asize];
	cin>>n;
	fr0(i,0,n){
		cin>>arr[i];
		if(arr[i]>mx)mx=arr[i];
	}
	ll sum=0;
	fr0(i,0,n){
		sum+=(mx-arr[i]);
	}
	cout<<sum<<endl;

	return 0;
}
