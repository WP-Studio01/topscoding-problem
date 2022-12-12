#include <bits/stdc++.h>
using namespace std;
int a[1005],b[1005],c[1005];
string add(string x,string y)
{
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	a[0]=x.size();
	for(int i=1;i<=a[0];i++)
	{
		a[i]=x[a[0]-i];
	}
	b[0]=x.size();
	for(int i=1;i<=b[0];i++)
	{
		b[i]=x[b[0]-i];
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
		tmp=(char)(c[i]+'0')+tmp;
	}
	return tmp;
}
string toString(int n)
{
	ostringstream sout;
	sout<<n;
	return sout.str();
}
int main()
{
	string sum="0";
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum=add(sum,toString(i));
	}
	cout<<sum;
	return 0;
}

