//411A
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int flagz=0,flagZ=0,flag1=0;
	if(s.length()>=5)
	{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>96 && s[i]<123 && flagz==0)
		{
			flagz=1;
		}
		else if(s[i]>64 && s[i]<91 && flagZ==0)
		{
			flagZ=1;
		}
		else if(s[i]>47  && s[i] <58 && flag1==0)
		{
			flag1=1;
		}
		if(flag1==1 && flagz==1 && flagZ==1)
			break;
	}
	}
	if(s.length()>4 && flag1==1 && flagz==1 && flagZ==1)
		cout<<"Correct";
	else
		cout<<"Too weak";
	return 0;
}
