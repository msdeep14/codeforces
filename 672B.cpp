//352 prob B
#include<iostream>
#include<cstring>
#include<set>
using namespace std;
int main(){
	int n;
	string s;
	cin>>n;
	cin>>s;
	set<char> st(s.begin(),s.end());
	if(s.size()>26)cout<<"-1"<<endl;
	else cout<<n-st.size();
	return 0;
}

/*
int main(){
	int n;
	string s;
	cin>>n;
	cin>>s;
	int arr[27]={0};
	for(int i=0;i<n;i++){
		arr[s[i]-96]++;
	}
	int ans=0;
	char store[27];
	int j=0;
	int size=0;
	for(int i=1;i<27;i++){
		if(arr[i]==0){
		store[j++]=i+96;
		size=j;
		}
	}

	for(int i=1;i<27;i++){
		int x=arr[i];
		if(x>0) ans+=x-1;
		size-=x-1;
		if(size<0) ans=-1;
	}
	if(s.size()>26) cout<<"-1";
	else cout<<ans;
}
*/
