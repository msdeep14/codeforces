//mandeep singh @msdeep14
//433B
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
ll arr[asize],brr[asize],crr[asize];
int main(){
	ll n,m,type,l,r;
	cin>>n;
	fr0(i,0,n)cin>>arr[i];
	brr[0]=arr[0];
	fr0(i,1,n){
		brr[i]=brr[i-1]+arr[i];
	}
	sort(arr,arr+n);
	crr[0]=arr[0];
	fr0(i,1,n){
		crr[i]=crr[i-1]+arr[i];
	}
	cin>>m;
	while(m--){
		cin>>type>>l>>r;
		l=l-1;
		r=r-1;
		if(type==1){
			cout<<brr[r]-brr[l-1]<<endl;
		}
		else if(type==2){
			cout<<crr[r]-crr[l-1]<<endl;
		}
	}
	return 0;
}
