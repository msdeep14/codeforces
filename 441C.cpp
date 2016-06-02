//441C
#include<iostream>
using namespace std;
int main(){
	int n,m,t;
	cin>>n>>m>>t;
	int j=1,k=1,l=0,flagr=1,flagl=0;
	for(int i=0;i<t-1;i++){
		l=0;
		cout<<"2 ";
		while(l!=2){
			cout<<j<<" "<<k<<" ";
			l++;
			if(k==m &&flagr==1){
				j++;
				flagl=1;
				flagr=0;
			}
			else if(k<m && flagr==1){
				k++;
			}
			else if(k>1 && flagl==1){
				k--;
			}
			else if(k==1&&flagl==1){
				j++;
				flagr=1;
				flagl=0;
			}
		}
		cout<<endl;
	}
	cout<<(n*m - 2*(t-1))<<" ";
	int x=n*m - 2*(t-1);
	int y=1;
	while(y<=x){
		y++;
		cout<<j<<" "<<k<<" ";
		if(k==m &&flagr==1){
				j++;
				flagl=1;
				flagr=0;
			}
			else if(k<m && flagr==1){
				k++;
			}
			else if(k>1 && flagl==1){
				k--;
			}
			else if(k==1&&flagl==1){
				j++;
				flagr=1;
				flagl=0;
			}
	}
	return 0;
}
