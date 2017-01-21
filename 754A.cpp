//mandeep singh @msdeep14
//contest problem A round 390 div 2
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
	ll n,k=0;
	ll arr[1000];
	cin>>n;
	arr[0]=0;
	ll sum=0;
	fr1(i,1,n){
		cin>>arr[i];
		sum+=arr[i];
	}
	ll flag=0,flag1=0;
	ll ans=0;
	ll i=1;
	if(sum!=0){
		cout<<"YES\n";
		cout<<"1\n";
		cout<<"1 "<<n<<endl;
		flag1=1;
	}
	
	else{
		k=1;
		while(flag==0 && i<n){
			k++;
			ans+=arr[i];
			sum-=arr[i];
			i++;
			if(ans!=0 && sum!=0){
				cout<<"YES\n"<<"2"<<endl;
				cout<<"1 "<<k-1<<endl;
				cout<<k<<" "<<n<<endl;
				flag=1;
			}
		}
	}
	if(flag==0 && flag1==0){
		cout<<"NO\n";
	}

	return 0;
}
