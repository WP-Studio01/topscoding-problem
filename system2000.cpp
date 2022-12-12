#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int id;
	int t;
	int score;
}a[305];
bool cmp(Node x,Node y)
{
	if(x.score!=y.score)
		return x.score>y.score;
	if(x.t!=y.t)
		return x.t>y.t;
	return x.id<y.id;
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		a[i].id=i;
		a[i].score=x+y+z;
		a[i].t=x;
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=m;i++)
	{
		cout<<a[i].id<<" "<<a[i].score<<endl;
	}
	return 0;
}

