#include <bits/stdc++.h>
/*让endl不刷新缓冲区，并忽略flush，因为这会严重拖慢流的速度*/
#define endl "\n"
#define flush ""
using namespace std;
int a[100005],b[100005],c[100005];
string add(string x,string y)
{
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	a[0]=x.size();
	for(int i=1;i<=a[0];i++)
	{
		a[i]=x[a[0]-i]-'0';
	}
	b[0]=y.size();
	for(int i=1;i<=b[0];i++)
	{
		b[i]=y[b[0]-i]-'0';
	}
	c[0]=max(a[0],b[0]);
	int jw=0;
	for(int i=1;i<=c[0];i++)
	{
		c[i]=a[i]+b[i]+jw;
		jw=c[i]/10;
		c[i]%=10;
	}
	if(jw)
	{
		c[++c[0]]=jw;
	}
	string tmp;
	for(int i=1;i<=c[0];i++)
	{
		tmp=char(c[i]+'0')+tmp;
//		cout<<"tmp:"<<tmp<<endl;
	}
	return tmp;
}
int main()
{
	/*头部信息*/
 	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*主体代码开始*/
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='+')
		{
			s[i]=' ';
		}
	}
//	cout<<s<<endl;
	istringstream sin(s);
	string sum="0",t;
	while(sin>>t)
	{
		sum=add(sum,t);
//		cout<<"t:"<<t<<endl;
//		cout<<"sum:"<<sum<<endl;
	}
	cout<<sum;
	return 0;
}

