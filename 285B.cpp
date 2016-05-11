//285B
#include<iostream>
#include<vector>
#include<utility>
#include<cstring>
#define src first
#define dst second
using namespace std;
int main(){
	int n,s,t;
	int x;
	vector<pair<int,int> > v;
	cin>>n>>s>>t;
	v.resize(n+1);
	for(int i=1;i<=n;i++){
		cin>>x;
		v[i].src=i;
		v[i].dst=x;
	}
	int visited[100005];
	for(int i=0;i<=n;i++)
		visited[i]=0;
	//memset(visited,100005,0);
	int flag=1;
	int min=0;
	int current=s;
	if(s==t) min=0;
	else{
		while(flag){
			int pos=v[current].src;
			int dest=v[current].dst;
			min++;
			visited[dest]=1;
			if(t==dest){
				flag=0;
			}
			else if(pos==dest){
				min=-1;
				flag=0;
				break;
			}
			else{
				if(visited[v[dest].dst]!=1)
					current=dest;
				else{
					min=-1;
					flag=0;
					break;
				}
			}
		}
	}
	cout<<min;
	return 0;
}
