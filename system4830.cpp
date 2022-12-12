#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<string,int> a;
	int n;
	cin>>n;
	string s;
	while(cin>>s)
	{
		a[s]++;
	}
	pair<string,int> maxn=make_pair("",0);
	for(auto& i : a)
	{
		if(i.second>maxn.second)
		{
			maxn=i;
		}
	}
	cout<<maxn.first;
	return 0;
}

