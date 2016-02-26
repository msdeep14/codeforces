//550C
#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	int num=0;
	int flag=0;
	for(int i=0;i<n && flag ==0;i++)
	{
		//check for one digit;
		num=(s[i]-48);
		if(num%8==0)
		{
			flag=1;
			cout<<"YES\n";
				cout<<num;
			break;
		}
		for(int j=i+1;j<n;j++)
		{
			
			num=(s[i]-48)*10 + (s[j]-48);
			if(num%8==0)
			{
				flag=1;
				cout<<"YES\n";
				cout<<num;
				break;
			}
			
			//check for 2 digit
			for(int k=j+1;k<n;k++)
			{
				num=(s[i]-48)*100 + (s[j]-48)*10 + (s[k]-48);
				if(num%8==0)
				{
					cout<<"YES\n";
				cout<<num;
					flag=1;
					break;
				}
				//check for 3 digits
			}
			if(flag==1)
				break;
		}
		if(flag==1)
			break;
	}
	if(flag==0)
		cout<<"NO";
	return 0;
}
