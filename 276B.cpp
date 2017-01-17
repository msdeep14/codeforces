//mandeep singh @msdeep14
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
#define frn0(i,a,b) for(int i=b-1;i>=a;i--)
#define frn1(i,a,b) for(int i=b;i>a;i--)
using namespace std;
const int asize= 100005;
const int  mod = 1000000007;
long long int mx=-inf;
long long int mi=inf;
ll arr[27];
int main(){
	string s;
	cin>>s;
	ll n=s.length();
	fr0(i,0,n){
		arr[s[i]-97]++;
	}
	ll count=0;
	fr0(i,0,26){
		if(arr[i]%2!=0) count++;
	}
	if(count==0 || count%2!=0) cout<<"First\n";
	else cout<<"Second\n";
	return 0;
}
