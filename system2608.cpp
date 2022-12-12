#include <bits/stdc++.h>
using namespace std;
int a[256],b[256],c[256];
string jian(string x,string y)
{
	a[0]=x.size();
	for(int i=1;i<=a[0];i++)
	{
		a[i]=x[a[0]-i];
	}
	b[0]=y.size();
	for(int i=1;i<=b[0];i++)
	{
		b[i]=y[b[0]-i];
	}
	c[0]=max(a[0],b[0]);
	
}
int main()
{
	return 0;
}

