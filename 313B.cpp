//313B
//
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	int n,r,l,m;
	cin>>s;
	n=s.length();
	int count[100005];
	for(int i=0;i<=n;i++)
	{
		count[i]=0;
	}
	for(int i=1;i<n;i++)
	{
		if(s[i-1]==s[i])
		{
			count[i+1]+=count[i]+1;
		}
		else
		{
			count[i+1]=count[i];
		}
	}
	
	cin>>m;
	while(m--)
	{
		cin>>r>>l;
		cout<<count[l]-count[r];
		cout<<endl;
	}
	return  0;
}
