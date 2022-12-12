#include <bits/stdc++.h>
#define X first
#define Y second
/*让endl不刷新缓冲区，并忽略flush，因为这会严重拖慢流的速度*/
#define endl "\n"
#define flush ""
using namespace std;
typedef pair<int,int> POSITION;
int cnt,world[105][105],m,n;
void bfs()
{
	queue<POSITION> que;
	que.push(make_pair(1,1));
	while(!que.empty())
	{
		POSITION that=que.front();
		que.pop();
//		cout<<that.X<<" "<<that.Y<<endl;
		if(world[that.X][that.Y])
		{
			continue;
		}
		if(that.X<=0 || that.X>m)
		{
			continue;
		}
		if(that.Y<=0 || that.Y>n)
		{
			continue;
		}
		world[that.X][that.Y]=++cnt;
		que.push(make_pair(that.X,that.Y+1));
		que.push(make_pair(that.X+1,that.Y));
		que.push(make_pair(that.X,that.Y-1));
		que.push(make_pair(that.X-1,that.Y));
	}
}
int main()
{
	/*头部信息*/
 	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*主体代码开始*/
	cin>>m>>n;
	bfs();
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<world[i][j]<<" ";
		}
		cout<<endl;
	}
//	cout<<cnt;
	return 0;
}

