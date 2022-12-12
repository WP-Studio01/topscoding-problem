#include <bits/stdc++.h>
#define endl "\n"
#define flush  
using namespace std;
int x[4]={0,-1,0,1},y[4]={-1,0,1,0},m,n,shuliang;
bool Map[20][20],f[20][20];
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
			cin>>Map[i][j];
		}
	}
	cin>>tbegin.x>>tbegin.y;
	cin>>tend.x  >>tend.y  ;
	search(1,tbegin);
	return 0;
}
void print()
{
	for(int i=1;i<=shuliang;i++)
	{
		cout<<"("<<pos[i].x<<","<<pos[i].y<<")->";
	}
	//特别处理结束节点
	cout<<"("<<tend.x<<","<<tend.y<<")\n"; 
}

