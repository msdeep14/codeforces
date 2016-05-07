//133A
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s;
	cin>>s;
	int flag=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='H'||s[i]=='9'||s[i]=='Q'){
			cout<<"YES\n";
			flag=1;
			break;
		}
	}
	if(flag==0) cout<<"NO\n";
	return 0;
}
