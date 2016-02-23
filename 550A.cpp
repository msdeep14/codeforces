//550A
//mandeep singh @msdeep14
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string pat="AB";
	int flag1=0,flag2=0;
	int x=1;
	for(int i=0;i<s.size()-1;i+=x)
	{
		x=1;
		if(s[i]=='A' && s[i+1]=='B' && flag1==0)
		{
			flag1=1;
			i+=2;
			x=0;
		}
		if(flag1==1)
		{
			if(s[i]=='B' && s[i+1]=='A')
			{
				flag2=1;
			}
		}
	}
	if(flag1==0 || flag2==0)
	{
		flag1=0;
		flag2=0;
		for(int i=0;i<s.size()-1;i+=x)
		{
			x=1;
			if(s[i]=='B' && s[i+1]=='A' && flag2==0)
			{
				flag2=1;
				i+=2;
				x=0;
			}
			if(flag2==1)
			{
				if(s[i]=='A' && s[i+1]=='B')
				{
					flag1=1;
				}
			}
		}
	}
	if(flag1==1 && flag2==1)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
