//mandeep singh @msdeep14
//754B
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
char a[10][10];
int main(){
	ll n=4;
	ll flag=0;
	int i,j;
	for(i=2;i<6;i++){
	       	for(j=2;j<6;j++){
	       		cin>>a[i][j];
			   }
		   }
		   for(i=2;i<6;i++){
		   	for(j=2;j<6;j++){
		   		if((a[i][j]+a[i][j+1]+a[i][j+2])==('.'+'x'+'x')){
		   			cout<<"YES";
		   			 return 0;
		   		}
		   		if((a[i][j]+a[i+1][j]+a[i+2][j])==('.'+'x'+'x')){
		   			cout<<"YES"; 
		   			return 0;
		   		}
                if((a[i][j]+a[i+1][j+1]+a[i+2][j+2])==('.'+'x'+'x')){
                	cout<<"YES";
                	 return 0;
                }
                if((a[i][j]+a[i+1][j-1]+a[i+2][j-2])==('.'+'x'+'x')){
                	cout<<"YES";
                	 return 0;
                }
			   }
		   }
	/*
	for(int i=2;i<6 ;i++){
		for(int j=2;j<6;j++){
			if((m[i][j]+m[i+1][j]+m[i+2][j])==('.'+'x'+'x')){
				cout<<"YES\n";
				//flag=1;
				return 0;
			}
			if((m[i][j]+m[i][j+1]+m[i][j+1])==('.'+'x'+'x')){
				cout<<"YES\n";
				//flag=1;
				return 0;
			}
			if((m[i][j]+m[i+1][j+1]+m[i+2][j+2])==('.'+'x'+'x')){
				cout<<"YES\n";
				//flag=1;
				return 0;
			}
			if((m[i][j]+m[i+1][j-1]+m[i+2][j-2])==('.'+'x'+'x')){
				cout<<"YES\n";
				//flag=1;
				return 0;
			}
		}
	}*/

	/*
	for(int i=0;i<n && flag==0;i++){
		for(int j=0;j<n && flag==0;j++){
			if(m[i][j]=='x'){
				if(((i+2)<n) && ((m[i+1][j]=='x'&& m[i+2][j]=='.') || (m[i+1][j]=='.' && m[i+2][j]=='x') ||(m[i+1][j]=='x' && m[i+2][j]=='x'))){
					cout<<"YES\n";
					flag=1;
				}
				else if(((j+2)<n) && ((m[i][j+1]=='x'&& m[i][j+2]=='.') || (m[i][j+1]=='.' && m[i][j+2]=='x') ||(m[i][j+1]=='x' && m[i][j+2]=='x'))){
					cout<<"YES\n";
					flag=1;
				}
				else if(((i+2)<n && (j+2)<n) && ((m[i+1][j+1]=='x'&& m[i+2][j+2]=='.') || (m[i+1][j+1]=='.' && m[i+2][j+2]=='x') ||(m[i+1][j+1]=='x' && m[i+2][j+2]=='x'))){
					cout<<"YES\n";
					flag=1;
				}

				else if(((i-2)>=0) && ((m[i-1][j]=='x'&& m[i-2][j]=='.') || (m[i-1][j]=='.' && m[i-2][j]=='x') ||(m[i-1][j]=='x' && m[i-2][j]=='x'))){
					cout<<"YES\n";
					flag=1;
				}
				else if( ((j-2)>=0) && ((m[i][j-1]=='x'&& m[i][j-2]=='.') || (m[i][j-1]=='.' && m[i][j-2]=='x') ||(m[i][j-1]=='x' && m[i][j-2]=='x'))){
					cout<<"YES\n";
					flag=1;
				}
				else if(((i-2) >=0 && (j-2)>=0) && ((m[i-1][j-1]=='x'&& m[i-2][j-2]=='.') || (m[i-1][j-1]=='.' && m[i-2][j-2]=='x') ||(m[i-1][j-1]=='x' && m[i-2][j-2]=='x'))){
					cout<<"YES\n";
					flag=1;
				}

			}
			else if(m[i][j]=='.'){

			if( ((i+2)<n) && ((m[i+1][j]=='x'&& m[i+2][j]=='x') || (m[i+1][j]=='x' && m[i+2][j]=='x') ||(m[i+1][j]=='x' && m[i+2][j]=='x'))){
					cout<<"YES\n";
					flag=1;
				}
				else if(((j+2)<n) && ((m[i][j+1]=='x'&& m[i][j+2]=='x') || (m[i][j+1]=='x' && m[i][j+2]=='x') ||(m[i][j+1]=='x' && m[i][j+2]=='x'))){
					cout<<"YES\n";
					flag=1;
				}
				else if( ((i+2)<n && (j+2)<n) && ((m[i+1][j+1]=='x'&& m[i+2][j+2]=='x') || (m[i+1][j+1]=='x' && m[i+2][j+2]=='x') ||(m[i+1][j+1]=='x' && m[i+2][j+2]=='x'))){
					cout<<"YES\n";
					flag=1;
				}
				else if( ((i-2)>=0) && ((m[i-1][j]=='x'&& m[i-2][j]=='x') || (m[i-1][j]=='x' && m[i-2][j]=='x') ||(m[i-1][j]=='x' && m[i-2][j]=='x'))){
					cout<<"YES\n";
					flag=1;
				}
				else if(((j-2)>=0) && ((m[i][j-1]=='x'&& m[i][j-2]=='x') || (m[i][j-1]=='x' && m[i][j-2]=='x') ||(m[i][j-1]=='x' && m[i][j-2]=='x'))){
					cout<<"YES\n";
					flag=1;
				}
				else if( ((i-2)>=0 && (j-2)>=0) && ((m[i-1][j-1]=='x'&& m[i-2][j-2]=='x') || (m[i-1][j-1]=='x' && m[i-2][j-2]=='x') ||(m[i-1][j-1]=='x' && m[i-2][j-2]=='x'))){
					cout<<"YES\n";
					flag=1;
				}
			}
		}
	}
	*/
	
	//if(flag==0)
		cout<<"NO\n";
	return 0;
}
