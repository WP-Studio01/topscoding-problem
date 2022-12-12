#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int b,e;
}a[100005];
int ed=INT_MIN,cnt;
bool cmp(Node x,Node y)
{
	return x.e<y.e;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].b>>a[i].e;
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++)
	{
		if(a[i].b>ed)
		{
			ed=a[i].e;
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}

