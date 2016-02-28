//400A
#include<iostream>
using namespace std;
int main()
{
	string s;
	
	int ans=0;
	int t;
	cin>>t;
	while(t--)
	{
		ans=0;
	int flag112=0,flag121=0,flag26=0,flag62=0,flag34=0,flag43=0;
	cin>>s;
	for(int i=0;i<12;i++)
	{
		if(s[i]=='X')
		{
			flag112=1;
			ans++;
			break;
		}
	}
	int count=0;
	for(int i=0;i<12;i++)
	{
		if(s[i]=='X')
		{
			count++;
		}
	}
	if(count==12)
	{
		ans++;
		flag121=1;
		count=0;
	}
	int i,j;
	for(i=0,j=4;i<4,j<8;i++,j++)
	{
		if(s[i]=='X' && s[j]=='X')
		{
			if(s[j+4]=='X')
			{
				flag34=1;
				ans++;
				break;
			}
		}
	}
	
	for(i=0,j=3;i<3,j<6;i++,j++)
	{
		if(s[i]=='X' && s[j]=='X')
		{
			if(s[j+3]=='X')
			{
				if(s[j+6]=='X')
				{
					ans++;
					flag43=1;
					break;
				}
			}
		}
	}
	
	for(i=0,j=6;i<6,j<12;i++,j++)
	{
		if(s[i]=='X' && s[j]=='X')
		{
			ans++;
			flag26=1;
			break;
		}
	}
	count=0;
	if(s[0]=='X')
	{
		count=1;
		for(j=2;j<11;j+=2)
		{
			if(s[j]=='X')
			{
				count++;
			}
			else
			{
				break;
			}
		}
		if(count==6)
		{
			ans++;
			flag62=1;
		}
	}
	if(count<6 && s[1]=='X')
	{
	
		count=1;
		for(j=3;j<12;j+=2)
		{
			if(s[j]=='X')
			{
				count++;
			}
			else
			{
				break;
			}
		}
		if(count==6)
		{
			ans++;
			flag62=1;
		}
	
	}
	cout<<ans<<" ";
	if(flag112==1)
		cout<<"1x12 ";
	if(flag26==1)
		cout<<"2x6 ";
	if(flag34==1)
		cout<<"3x4 ";
	if(flag43==1)
		cout<<"4x3 ";
	if(flag62==1)
		cout<<"6x2 ";
	if(flag121==1)
		cout<<"12x1";
	cout<<endl;
	
	}	
	return 0;
}
