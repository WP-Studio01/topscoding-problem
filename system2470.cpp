#include <bits/stdc++.h>
using namespace std;
stack<int> s;
int main()
{
	int a;
	while(cin>>a)
	{
		s.push(a);
	}
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}

