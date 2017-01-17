//mandeep singh @msdeep14
//
#include<bits/stdc++.h>
#define ll long long int
#define fi first
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
int main(){
	string s;
	cin>>s;
	string ans;
	ll n=s.length();
	ll count=0;
	ans.pb(s[0]);
	fr0(i,1,n){
		if(s[i]==s[i-1]){
			count++;
		}
		else count=0;
		if(count<2){
			ans.pb(s[i]);
		}
	}
	count=1;
	ll count2=0;
	n=ans.length();
	string sol;
	//cout<<"ans:: "<<ans<<endl;
	ll x=1;
	for(int i=0;i<n;i+=x){
		if(ans[i]==ans[i+1] && i+1<n){
			sol.pb(ans[i]);
			sol.pb(ans[i+1]);
			if(ans[i+2]==ans[i+3] && i+3<n){
				sol.pb(ans[i+2]);
				x=4;
			}
			else if(i+2<=n-1){
                sol.pb(ans[i+2]);
                x=3;
			}
			else{
                //sol.pb(ans[i+2]);
				x=3;
			}
		}
		else{
            sol.pb(ans[i]);
			x=1;
		}
	}


	cout<<sol<<endl;
	return 0;
}
