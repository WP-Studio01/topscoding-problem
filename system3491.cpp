#include <bits/stdc++.h>
using namespace std;
int a[55],cnt=1;
int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=2;i<=n;i++)
		{
			if(a[i]<=a[i-1])
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}

