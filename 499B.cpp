//499B
#include<iostream>
#include<cstring>
#include<map>
using namespace std;
int main(){
	int n,m;
	string s1,s2,s3;
	map<string , string> m1;
	map<string,string> m2;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>s1>>s2;
		m1[s1]=s2;
		m2[s2]=s1;
	}
	for(int i=0;i<n;i++){
		cin>>s1;
		s2=m1[s1];
		s3=m2[s2];
		if(s2.length()<s3.length()) cout<<s2<<" ";
		else cout<<s3<<" ";
	}
	return 0;
}
