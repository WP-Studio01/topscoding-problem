#include <bits/stdc++.h>
#include <set>
using namespace std;
int main()
{
	set<int> a;
	int n;
	cin>>n;
	while(n--)
	{
		int t;
		cin>>t;
		a.insert(t);
	}
	for(auto& i : a)
	{
		cout<<i<<" ";
	}
	return 0;
}

