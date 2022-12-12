#include <bits/stdc++.h>
using namespace std;
string s[7]={"Red","Orange","Yellow","Green","Blue","Cyan","Purple"};
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		string t;
		cin>>t>>a;
		for(int i=0;i<7;i++)
		{
			if(s[i]==t)
			{
				b=i;
				break;
			}
		}
		a=(b+a+1)%7;
		cout<<s[a]<<endl;
	}
	return 0;
}

