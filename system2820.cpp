#include <bits/stdc++.h>
#include <algorithm>
/*让endl不刷新缓冲区，并忽略flush，因为这会严重拖慢流的速度*/
#define endl "\n"
#define flush ""
using namespace std;
/*头部数据*/
typedef long long LL;
int a[100005],b[100005];
int main()
{
	/*头部脚本*/
 	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*主体代码开始*/
	set<LL> st;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		st.insert(a[i]);
	}
	for(int i=1;i<=m;i++)
	{
		cin>>b[i];
		st.insert(b[i]);
	}
	for(auto &i : st)
	{
		cout<<i<<" ";
	}
	return 0;
}

