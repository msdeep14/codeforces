//431B
#include<iostream>
#include<algorithm>
#include<climits>
#define ll long long 
using namespace std;
int main(){
	int n=5;
	int s[]={1,2,3,4,5};
	ll int temp;
	ll int max=-1;
	int g[6][6];
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++) 
			cin>>g[i][j];
	}
	do{
		
		temp=g[s[0]][s[1]]+g[s[1]][s[0]]+g[s[2]][s[3]]+g[s[3]][s[2]]+g[s[1]][s[2]]+g[s[2]][s[1]]+g[s[4]][s[3]]+g[s[3]][s[4]]+g[s[2]][s[3]]+g[s[3]][s[2]]+g[s[3]][s[4]]+g[s[4]][s[3]];
		if(temp>max) max=temp;
		//cout<<max<<endl;
	}while(next_permutation(s,s+n));
	cout<<max<<endl;
	return 0;
}
