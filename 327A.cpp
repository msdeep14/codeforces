#include<iostream>
#include<algorithm>
int ans=1;
int a,b;
using namespace std;

int f(int i,int j,int n,int arr[],int brr[])
{
	int z,flag1=1,flag2=1;
	while(flag1 && j>=i)
	{
		if(arr[i]==0)
		{
			flag1=0;
		}
		else
			i++;
	}

	while(flag2 && j>=i)
	{
		if(arr[j]==0)
		{
			flag2=0;
		}
		else
			j--;
	}
	if(flag1==0 && flag2==0)
	{
		int x=j-i+1-brr[j]+brr[i];
		int y=brr[i-1]+brr[n]-brr[j];
		z=x+y;
		return z;
	}
	return 0;
}




int main()
{
	int i,j,n;
	int arr[1000],brr[1000];
	cin>>n;
	brr[0]=0;
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
		brr[i]=brr[i-1]+arr[i];
	}
	a=1;
	b=n;
	while(a<=n)
	{
	    b=n;
	    while(b>=a)
		{int x=f(a,b,n,arr,brr);
		//int y=f(a,b,n,arr,brr);
		//x=max(x,y);
		if(x>ans)
			ans=x;
        b--;
		}
		a++;
	}
	if(brr[n]==n)
        cout<<n-1;
    else
        cout<<ans;
	return 0;
}

