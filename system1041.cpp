#include <bits/stdc++.h>
using namespace std;
string con10to(int n,int base)
{
	string tmp;
	while(n)
	{
		int t=n%base;
		n/=base;
		tmp=char(t+'0')+tmp;
	}
	return tmp;
}
int main()
{
	int n;
	cin>>n;
	cout<<con10to(n,2);
	return 0;
}

