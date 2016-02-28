//447A
#include<iostream>
using namespace std;
int main()
{
	int n,p,x;
	int check[305];
	for(int i=0;i<305;i++)
	{
		check[i]=0;
	}
	cin>>p>>n;
	int flag=0;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		int y=x%p;
		if(check[y]==1)
		{
			flag=1;
			cout<<i<<endl;
			break;
		}
		else
		{
			check[y]=1;
		}
	}
	if(flag==0)
	{
		cout<<"-1";
	}
	return 0;
}
