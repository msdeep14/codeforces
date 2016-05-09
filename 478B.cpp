//478B
#include<iostream>
#define ll long long int
using namespace std;
int main(){
	ll n,m;
	ll min=0,max=0,par,x,y;
	cin>>n>>m;
	par=n;
	par=par-m;
	max=(par*(par+1))/2;
	par=n;
	par=par-m;
	x=1;
	while(par!=0){
		if(par>m){
			x++;
			par-=m;
		}
		else{
			y=m-par;
			min=(y*x*(x-1))/2 + (par*(x+1)*x)/2;
			par=0;
 		}
	}
	cout<<min<<" "<<max;
	return 0;
}
