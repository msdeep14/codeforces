//479C
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#define a first
#define b second
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<pair<int ,int> > v(n);
	for(int i=0;i<n;i++) cin>>v[i].a>>v[i].b;
	sort(v.begin(),v.end());
	int min=-1;
	for(int i=0;i<n;i++){
		if(min<=v[i].b) min=v[i].b;
		else min=v[i].a;
	}
	cout<<min;
	return 0;
}
