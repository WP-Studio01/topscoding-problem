#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	int maxn=0;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='1') s[i]=' ';
	}
	istringstream sin(s);
	while(sin>>t)
	{
		if(t.size()>maxn) maxn=t.size();
	}
	cout<<maxn;
	return 0;
}

