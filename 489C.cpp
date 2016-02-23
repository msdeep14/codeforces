//489C
//
#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	int i,j,k,m,n,s,x,y;
	int arr[110];
	int brr[110];
	memset(arr,0,110);
	for(i=0;i<110;i++)
		arr[i]=0;
	cin>>n>>s;

	 x=s/9;
	int rem=s%9;
	for(i=0;i<x;i++)
		arr[i]=9;
	arr[i]=rem;
	if(s==0 || (9*n)<s)
	{
	    if(n==1 && s==0)
        {
            cout<<0<<" "<<0;
            exit(0);
        }
		cout<<-1<<" "<<-1;
		exit(0);
	}
	i=0;
	j=n-1;
	while(j>=0 && i<=n)
	{
		brr[i]=arr[j];
		j--;
		i++;
	}

	if(brr[0]==0)
	{
		brr[0]=1;
		for(i=1;i<n;i++)
		{
			if(brr[i]!=0)
			{
				brr[i]-=1;
				break;
			}
		}
	}


	for(i=0;i<n;i++)
		cout<<brr[i];
	cout<<" ";
	for(i=0;i<n;i++)
		cout<<arr[i];


}
