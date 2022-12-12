#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int dir[20],n;
void print();
void search(int dep,int n)
{
	if(n==0)
	{
		print();
		return ;
	}
//	cout<<"dep:"<<dep<<endl;
//	cout<<"n  :"<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		if(n-i>=0)
		{
			dir[dep]=i;
			n-=i;
			if(dir[dep]>=dir[dep-1])
			{
				search(dep+1,n);
			}
			n+=i;
			dir[dep]=0;
		}
	}
}
int main()
{
	cin>>n;
	try
	{
		search(1,n);
	}
	catch(exception &ex)
	{
		cerr<<"Catch exception:"<<ex.what()<<endl;
	}
	catch(...)
	{
		cerr<<"Error"<<endl;
	}
	return 0;
}
void print()
{
	if(dir[1]==n)
	{
		return;
	}
	int i=1;
	ostringstream sout;
	while(dir[i]!=0)
	{
		sout<<dir[i]<<"+";
		i++;
	}
	string str=sout.str();
	cout<<str.substr(0,str.size()-1)<<endl;
}

