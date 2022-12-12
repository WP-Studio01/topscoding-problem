#include <bits/stdc++.h>
/*让endl不刷新缓冲区，并忽略flush，因为这会严重拖慢流的速度*/
#define endl "\n"
#define flush ""
using namespace std;
struct Node
{
	string name;
	string score;
}a[505];
bool cmp(Node x,Node y)
{
	if(x.score!=y.score)
	{
		if(x.score.size()!=y.score.size())
			return x.score.size()>y.score.size();
		else
			return x.score>y.score;
	}
	return x.name<y.name;
}
int main()
{
	/*头部信息*/
 	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*主体代码开始*/
	register int n;
	cin>>n;
	for(register int i=1;i<=n;i++)
	{
		cin>>a[i].name>>a[i].score;
	}
	sort(a+1,a+1+n,cmp);
	for(register int i=1;i<=n;i++)
	{
		cout<<a[i].name<<endl;
	}
	return 0;
}

