#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<string,int> a;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		string s;
		int t;
		cin>>s>>t;
		a[s]=t;
	}
	for(auto& i : a)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	return 0;
}

