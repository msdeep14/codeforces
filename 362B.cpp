//362B
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
ll arr[3005];
int main(){
	ll n,m;	
	cin>>n>>m;
	arr[0]=1;
	fr1(i,1,m) cin>>arr[i];
	arr[m+1]=n;
	sort(arr,arr+m+2);
	ll flag=0;
	if(m==0){
		cout<<"YES";
		flag=1;
	}
	else if((arr[1]==1 || arr[m]==n)){
		cout<<"NO\n";
		flag=1;
	}
	else{
	fr0(i,1,m-1){
		if(arr[1]==1 || arr[m]==n){
			cout<<"NO\n";
			flag=1;
			break;
		}
		else if(arr[i+1]-arr[i]==1 && arr[i+2]-arr[i+1]==1){
			cout<<"NO\n";
			flag=1;
			break;
		}
	}
}
	if(flag==0) cout<<"YES\n";
	//for(int i=0;i<m+2;i++) cout<<arr[i]<<" ";
	//	cout<<endl;
	return 0;
}
