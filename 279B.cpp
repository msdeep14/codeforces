//279B
#include<iostream>
using namespace std;
int main()
{
	int n,t;
	int book[100005];
	cin>>n>>t;
	for(int i=0;i<n;i++)
		cin>>book[i];
	int i=0,j=1;
	int sum=book[0];
	while(j<n)
	{
		if(sum>t)
		{
			sum-=book[i];
			i++;
		}	
		sum+=book[j];
		j++;
	}
	if(sum>t)
		i++;
	cout<<j-i;
	return 0;
}
