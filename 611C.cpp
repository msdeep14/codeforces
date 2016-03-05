//611C
#include<iostream>
using namespace std;

int main()
{
	int i,r,c,j,q,k,r1,r2,c1,c2;
	char mat[505][505];
	int ans[505][505];
	cin>>r>>c;

	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++){
			cin>>mat[i][j];
			ans[i][j]=0;
		}
	}

	//ans[1][1]=0;
	for(i=0;i<=r;i++)
	{
		mat[i][0]='a';
		ans[i][0]=0;
	}
	for(i=0;i<=c;i++)
	{	mat[0][i]='a';
		ans[0][i]=0;
	}

    for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			int count=0;
			if(mat[i][j]=='.' && mat[i][j]==mat[i-1][j] && mat[i][j]==mat[i][j-1])
			{
				count=2;
			}
			else if(mat[i][j]=='.' && mat[i][j]==mat[i-1][j])
			{
					count=1;
			}
			else if(mat[i][j]=='.' && mat[i][j]==mat[i][j-1])
			{
					count=1;
			}
					ans[i][j]=ans[i-1][j]+count+ans[i][j-1]-ans[i-1][j-1];
		}
	}
	/*for(i=1;i<=r;i++)
    {
          for(j=1;j<=c;j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }*/
	cin>>q;

	while(q--)
	{
		cin>>r1>>c1>>r2>>c2;
		int count1=0;
		for(i=r1;i<=r2;i++)
		{
			if(mat[i][c1]!='#' && mat[i][c1]==mat[i][c1-1])
				count1++;
		}
		for(i=c1;i<=c2;i++)
		{
			if(mat[r1][i]!='#' && mat[r1][i]==mat[r1-1][i])
				count1++;
		}
		cout<<(ans[r2][c2]+ans[r1-1][c1-1]-ans[r2][c1-1]-ans[r1-1][c2]-count1)<<endl;
		//cout<<ans[r2][c2]<<endl<<ans[r1-1][c1-1]<<endl<<ans[r2][c1-1]<<endl<<ans[r1-1][c2]<<endl<<count1<<endl;
		//cout<<"q"<<q<<endl;
	}
	return 0;
}
