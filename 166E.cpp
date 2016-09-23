//mandeep singh @msdeep14
//
#include<bits/stdc++.h>
#define ll long long int
#define fi first
#define se second
#define pb push_back
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
const int asize= 100005;
const int  mod = 1000000007;
int main(){
	ll n;
	cin>>n;
	ll ans=3;
	if(n==1) ans=0;
	else if(n==2) ans=3;
	else{
		ll count=0;
		while(n>2){
			n--;
			if(count==0){
				ans=((ans%mod)*(3%mod)%mod - 3)%mod;
				count=1;
			}
			else{
				ans=(((ans%mod)*(3%mod))%mod + 3)%mod;
				count=0;
			}
		}
	}
	cout<<ans%mod;
	return 0;
}
