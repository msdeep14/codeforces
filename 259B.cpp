//259B
#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f,g,h,i;
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
	int x,y,z;
	for(int k=max((g-b),(f-b))+1;k<=100000;k++){
		x=k-(g-b);
		y=k-(f-b);
		if(k+x+y==k+b+c && k+b+c==d+x+f && k+b+c==g+h+y && k+b+c==k+d+g && k+b+c==b+x+h && k+b+c == c+f+y && k+b+c==c+x+g){
			a=k;
			e=x;
			i=y;
			if(a>=1&& a<=100000 &&e>=1&& e<=100000 &&i>=1&& i<=100000 )
			break;
		}
	}
	cout<<a<<" "<<b<<" "<<c<<"\n"<<d<<" "<<e<<" "<<f<<"\n"<<g<<" "<<h<<" "<<i;
	return 0;
}
