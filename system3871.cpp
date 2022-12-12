#include <bits/stdc++.h>
#define endl "\n"
#define flush  
using namespace std;
int x[4]={0,-1,0,1},y[4]={-1,0,1,0},m,n,shuliang,maxn=INT_MIN;
bool Map[100][100],f[100][100];
struct Position
{
	int x,y;
}pos[20];
bool operator==(Position x,Position y)
{
	return (x.x==y.x&&x.y==y.y);
}
Position tbegin,tend;
void print();
void search(int dep,Position p)
{
	if(p==tend)
	{
		print();
		return;
	}
	if(p.x>m || p.y>=n)
	{
		return;
	}
	if(Map[p.x][p.y]==0)
	{
		return;
	}
	if(f[p.x][p.y])
	{
		return;
	}
	pos[dep]=p;
	shuliang=dep;
	f[p.x][p.y]=1;
	for(int i=0;i<4;i++)
	{
		p.x+=x[i];
		p.y+=y[i];
		search(dep+1,p);
		p.x-=x[i];
		p.y-=y[i];
	}
	f[p.x][p.y]=0;
}
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			char t;
			cin>>t;
			switch(t)
			{
				case '#':
					Map[i][j]=0;
					break;
				case '.':
					Map[i][j]=1;
					break;
			}
			//Map[i][j];
		}
	}
	tbegin.x=1,tbegin.y=1;
	tend.x=m,tend.y=n;
	search(1,tbegin);
	cout<<maxn;
	return 0;
}
void print()
{
	maxn=max(maxn,shuliang);
}

