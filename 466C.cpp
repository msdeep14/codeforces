#include <iostream>
#include <math.h>

using namespace std;

int a[1000010];
long long cnt[1000010];

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    long long s = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i];
        s += a[i];
    }
    if (s % 3 != 0)
        cout << "0\n";
    else {
        s /= 3;
        long long ss = 0;
        for(int i = n-1; i >= 0 ; --i)
        {
            ss += a[i];
            if (ss == s)
                cnt[i] = 1;
        }
        for(int i = n-2 ; i >= 0 ; --i)
            cnt[i] += cnt[i+1];
        
        long long ans = 0;
        ss = 0;
        for(int i = 0 ; i+2 < n ; ++i) {
            ss += a[i];
            if (ss == s)
                ans += cnt[i+2];
        }
        cout << ans << "\n";
    }
    return 0;
}

/*
//466C
#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[100005],cnt[100005],sums[100005];
	 long long s = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s += a[i];
	}
    if (s % 3 != 0)
    { 
		cout << "0\n";
	}
    else {
        s /= 3;
        long long ss = 0;
        for(int i = n-1; i >= 0 ; --i)
        {
            ss += a[i];
            if (ss == s)
                cnt[i] = 1;
			else
				cnt[i]=0;
        }
		sums[n-1]=cnt[n-1];
		for(int i=n-2;i>=0;i--)
		{
			sums[i]=sums[i+1]+cnt[i];
		}
        
        
        long long ans = 0;
        ss = 0;
        for(int i = 0 ; i+2 < n ; ++i) {
            ss += a[i];
            if (ss == s)
                ans += sums[i+2];
        }
        cout << ans << "\n";
    }
    return 0;
}


*/
