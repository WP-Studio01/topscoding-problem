#include <bits/stdc++.h>
/*��endl��ˢ�»�������������flush����Ϊ����������������ٶ�*/
#define endl "\n"
#define flush ""
using namespace std;
int a[105][105],dp[105][105];
int main()
{
	/*ͷ����Ϣ*/
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*������뿪ʼ*/
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+a[i][j];
		}
	}
	int maxn=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		maxn=max(dp[n][i],maxn);
	}
	cout<<maxn;
	return 0;
}

