//489B
//
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int n,m;
	int pair=0;
	int girls[101],boys[101];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>boys[i];
	cin>>m;
	for(int i=0;i<m;i++)
		cin>>girls[i];
	sort(boys,boys+n);
	sort(girls,girls+m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(abs(boys[i]-girls[j])<=1)
			{
				girls[j]=1000;
				pair++;
				break;
			}
		}
	}
	cout<<pair;
	return 0;
	
}
