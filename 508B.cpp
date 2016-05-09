//508B
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	int n,num,ind;
	int flag1=0,flag2=0;
	string s;
	cin>>s;
	 n=s.length();
	for(int i=0;i<n-1;i++){
		if((s[i]-48)%2==0){
			flag2=1;
			if(s[i]<s[n-1]){
				swap(s[i],s[n-1]);
				cout<<s;
				flag1=1;
				break;
			}
			else{
				ind=i;
				num=s[i];
			}
		}
	}
	if(flag1==0 && flag2==1){
		swap(s[n-1],s[ind]);
		cout<<s;
	}
	else if(flag1==0 && flag2==0) cout<<"-1";
	return 0;
}
