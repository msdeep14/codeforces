//476B
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
using namespace std;
double factorial(double n)
{
    double counter;
    double fact = 1;

     //for Loop Block
     for (double counter = 1; counter <= n; counter++)
     {
         fact = fact * counter;
     }

  return fact;
}
int main()
{
	string in,out;
	double n;
	cin>>in;
	cin>>out;
	n=in.length();
	double plus1=0,plus2=0,minus1=0,minus2=0,que=0;
	for(double i=0;i<n;i++)
	{
		if(in[i]=='+')
		{
			plus1++;
		}
		else
		{
			minus1++;
		}
	}
	for(double i=0;i<n;i++)
	{
		if(out[i]=='+')
		{
			plus2++;
		}
		else if(out[i]=='-')
		{
			minus2++;
		}
		else
		{
			que++;
		}
	}
	double ans1=plus1-minus1;
	double ans2=plus2-minus2;
	double x=ans1-ans2;

	double flag=0;
	for(double i=0;i<=que;i++)
    {
        plus1=i;
        minus1=que-i;
        if((plus1-minus1)==x)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
	{
		cout<<"0.000000000000";
		exit(0);
	}
	
	double y=factorial(minus1)*factorial(plus1);
    
	double z=factorial(que);


	z=z/y;
	//double j=1;
	y=1;
	for(double j=1;j<=que;j++)
	{
		y=y*2;
	}
	z=z/y;
	printf("%.9f",z);
	return 0;

}
