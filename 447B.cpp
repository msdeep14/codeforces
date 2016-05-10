//447B
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int n,k;
	string s;
	int arr[26];
	cin>>s;
	n=s.length();
	cin>>k;
	for(int i=0;i<26;i++) cin>>arr[i];
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=(i+1)*arr[s[i]-97];
	}
	sort(arr,arr+26);
	int j=n+1;
	for(int i=0;i<k;i++){
		sum+=j*arr[25];
		j++;
	}
	cout<<sum;
	return 0;
}
