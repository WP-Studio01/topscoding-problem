#include <bits/stdc++.h>
/*��endl��ˢ�»�������������flush����Ϊ����������������ٶ�*/
#define endl "\n"
#define flush ""
using namespace std;
int main()
{
	/*ͷ����Ϣ*/
 	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*������뿪ʼ*/
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

