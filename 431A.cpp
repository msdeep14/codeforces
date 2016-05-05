//431A
#include<iostream>
#include<cstring>
#define ll long long int
using namespace std;
int main(){
	string s;
	int arr[5];
	ll count=0;
	for(int i=1;i<=4;i++) cin>>arr[i];
	cin>>s;
	for(int i=0;i<s.length();i++){
		int x=s[i]-48;
		count+=arr[x];
	}
	cout<<count<<endl;
	return 0;
}
