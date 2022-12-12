#include <bits/stdc++.h>
using namespace std;
string s[105];
int main()
{
	int n;
	cin>>n;
	cin.get();
	for(int i=1;i<=n;i++)
	{
		getline(cin,s[i]);
	}
	for(int i=n;i>=1;i--)
	{
		cout<<s[i]<<endl;
	}
	return 0;
}

