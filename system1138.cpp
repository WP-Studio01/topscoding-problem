#include <bits/stdc++.h>
/*让endl不刷新缓冲区，并忽略flush，因为这会严重拖慢流的速度*/
#define endl "\n"
#define flush ""
using namespace std;
/*头部数据*/
string a[55];
bool cmp(string x,string y)
{
	if(x.size()!=y.size())
		return x.size()<y.size();
	return x<y;
}
int main()
{
	/*头部脚本*/
 	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*主体代码开始*/
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

