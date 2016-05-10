//507B
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	double r,x,y,x1,y1,d;
	cin>>r>>x>>y>>x1>>y1;
	d=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
	cout<<ceil(d/(2*r));
	return 0;
}
