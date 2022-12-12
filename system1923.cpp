#include <bits/stdc++.h>
using namespace std;
int a[1000005],b[1000005],c[1000005];
string f[5005];
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
	int len=max(a[0],b[0]);
	int jw=0;
	for(int i=1;i<=len;i++)
	{
		c[i]=a[i]+b[i]+jw;
		jw=c[i]/10;
		c[i]%=10;
	}
	if(jw>0)
	{
		len++;
		c[len]=jw;
	}
	c[0]=len;
	string tmp;
//	cout<<"c[0]:"<<c[0]<<endl;
	for(int i=1;i<=c[0];i++)
	{
		tmp=char(c[i]+'0')+tmp;
//		cout<<"tmp:"<<tmp<<endl;
	}
	return tmp;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	f[1]="1";
	f[2]="1";
	for(int i=3;i<=n;i++)
	{
		f[i]=add(f[i-2],f[i-1]);
//		cout<<i<<":"<<f[i]<<endl;
	}
	cout<<f[n];
	return 0;
}

