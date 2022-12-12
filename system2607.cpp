#include <bits/stdc++.h>
using namespace std;
int a[256],b[256],c[256];
string add(string x,string y)
{
	a[0]=x.size();
	for(int i=1;i<=a[0];i++)
	{
		a[i]=x[a[0]-i]-'0';
	}
	b[0]=x.size();
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
		c[0]++;
		c[c[0]]=jw;
	}
	string tmp;
	for(int i=1;i<=c[0];i++)
	{
		tmp=char(c[i]+'0')+tmp;
	}
	return tmp;
}
int main()
{
	string a,b;
	cin>>a>>b;
	cout<<add(a,b);
	return 0;
}

