#include <bits/stdc++.h>
using namespace std;
int pos[20],n;
bool a[50],b[50];
void print();
void search(int dep)
{
	if(dep>n)
	{
		print();
		return ;
	}
	for(int i=1;i<=n;i++)
	{
		bool &x=a[i],&y=b[abs(dep-i)];
		if(x!=1 && y!=1)
		{
			x=1;
			y=1;
			pos[dep]=i;
			search(dep+1);
			y=0;
			x=0;
		}
	}
}
int main()
{
	cin>>n;
	search(1);
	return 0;
}
void print()
{
	for(int i=1;i<=n;i++)
	{
		cout<<setw(5)<<pos[i];
	}
	cout<<endl;
}

