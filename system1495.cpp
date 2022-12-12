#include<iostream>
#include<cstdio>
using namespace std;
string shulie[1005];
int dangqian[55];
int num1,num2;
void dfs(int n)
{
	if(n==0)
	{
		string s;
		for(int i=1;i<=num2;i++)
		{
			s+=dangqian[i]+'0';
		}
		shulie[++num1]=s;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		dangqian[++num2]=i;
		dfs(n-i);
		dangqian[num2--]=0;
	}
}
bool hw(string s)
{
	int i=0,j=s.size()-1;
	while(i<=j)
	{
		if(s[i]!=s[j]) return false;
		i++,j--;
	}
	return true;
}
int main()
{
	int cnt=0;
	int n;
	cin>>n;
	dfs(n);
	for(int i=1;i<=num1;i++)
	{
		if(hw(shulie[i]))
		{
			cnt++;
		}
	}
	cout<<cnt-1;
	return 0;
}

