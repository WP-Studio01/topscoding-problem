#include <bits/stdc++.h>
/*让endl不刷新缓冲区，并忽略flush，因为这会严重拖慢流的速度*/
#define endl "\n"
#define flush ""
using namespace std;
int tong[256];
int main()
{
	/*头部信息*/
 	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*主体代码开始*/
	string s;
	cin>>s;
	auto zhuangtong=[](char c){tong[c]++;};
	for_each(s.begin(),s.end(),zhuangtong);
	for(int i=0;i<s.size();i++)
	{
		if(tong[s[i]]==1)
		{
			cout<<s[i];
			return 0;
		}
	}
	cout<<"no";
	return 0;
}

