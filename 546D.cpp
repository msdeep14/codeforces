//546D
#include <cstdio>
const int MAX = 5000005;
int dp[MAX];
int main()
{
	for (int i = 2; i < MAX; i++)
		if (!dp[i])
			for (int j = i; j < MAX; j += i)
			{
				int tmp = j;
				while (tmp % i == 0)
				{
					tmp /= i;
					dp[j]++;
				}
			}
	for (int i = 1; i < MAX; i++)
		dp[i] += dp[i - 1];
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", dp[a] - dp[b]);
	}
	return 0;
}
