//mandeep singh @msdeep14
//486B
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
	ll n,m;
	ll arr[101][101];
	ll brr[101][101];

	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>brr[i][j];
		}
	}
	fr0(i,0,101){
		fr0(j,0,101) arr[i][j]=1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(brr[i][j]==0){
				for(int k=0;k<m;k++) arr[i][k]=0;
				for(int l=0;l<n;l++) arr[l][j]=0;
			}
		}
	}
	ll orn[101];
	ll orm[101];
	for(int i=0;i<n+1;i++){
		orn[i]=0;
		orm[i]=0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			orn[i]=(orn[i]|arr[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			orm[i]=(orm[i]|arr[j][i]);
		}
	}
	int flag=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
               //cout<<brr[i][j]<<" "<<orn[i]<<" "<<orm[j]<<" ";
			   //cout<<(orn[i]|orm[j])<<endl;
			  // cout<<"hello\n";
			if(brr[i][j]!=(orn[i]|orm[j])){
				flag=1;
				break;
			}
		}
		if(flag==1) break;
	}

	if(flag==0){
		cout<<"YES\n";
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else cout<<"NO\n";
	return 0;
}
