#include <bits/stdc++.h>
/*让endl不刷新缓冲区，并忽略flush，因为这会严重拖慢流的速度*/
#define endl "\n"
#define flush ""
using namespace std;
int main()
{
	/*头部信息*/
 	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*主体代码开始*/
	string s;
	bool isDelete=false;
	while(getline(cin,s))
	{
		istringstream sin(s);
		char c;
		while(sin.get(c))
		{
			if(c=='*')
			{
				if(sin.peek()=='/')
				{
					sin.get();
					isDelete=false;
					continue;
				}
			}
			if(isDelete) continue;
			if(c=='/')
			{
				sin.get(c);
				if(c=='*')
				{
					isDelete=true;
					continue;
				}
				else if(c=='/')
				{
					goto END;
				}
			}
			cout<<c;
		}
		END:
		cout<<(!isDelete?"\n":"");
	}
	return 0;
}

