//prob 1
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n;
	int arr[2000];
	int brr[101];
	cin>>n;
	int j=0;
	int k=0;
	for(int i=1;i<=1000;i++)
	{
		j=100;
		int temp=i;
		while(temp){
			int rem=temp%10;
			brr[j--]=rem;
			temp/=10;
		}
		for(int x=j+1;x<=100;x++)
			arr[k++]= brr[x];
		if(k>=1015) break;
	}
	cout<<arr[n-1];
	return 0;
}
