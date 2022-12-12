#include <bits/stdc++.h>
/*��endl��ˢ�»�������������flush����Ϊ����������������ٶ�*/
#define endl "\n"
#define flush ""
using namespace std;
struct POSITION
{
	int x;
	int y;
};
int world[105][105],f[105][105],m,n;
POSITION makepos(int x,int y)
{
	POSITION t;
	t.x=x;
	t.y=y;
	return t;
}
void bfs()
{
	queue<POSITION> que;
	que.push(makepos(1,1));
	while(!que.empty())
	{
		POSITION t=que.front();
		que.pop();
		if(t.x==m && t.y==n)
		{
			cout<<"YES";
			return;
		}
		if(world[t.x][t.y]==1)
		{
			continue;
		}
		if(f[t.x][t.y])
		{
			continue;
		}
		if(t.x<=0 || t.x>m)
		{
			continue;
		}
		if(t.y<=0 || t.y>n)
		{
			continue;
		}
		f[t.x][t.y]=1;
		que.push(makepos(t.x,t.y+1));
		que.push(makepos(t.x+1,t.y));
		que.push(makepos(t.x,t.y-1));
		que.push(makepos(t.x-1,t.y));
	}
	cout<<"NO";
}
int main()
{
	/*ͷ����Ϣ*/
 	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*������뿪ʼ*/
	cin>>m;
	n=m;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>world[i][j];
		}
	}
	bfs();
	return 0;
}

