#include <bits/stdc++.h>
/*让endl不刷新缓冲区，并忽略flush，因为这会严重拖慢流的速度*/
#define endl "\n"
#define flush ""
using namespace std;
/*头部数据*/
int main() {
	/*头部脚本*/
 	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*主体代码开始*/
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	reverse(s.begin(),s.end());
	cout<<"Max:"<<s<<endl;
	reverse(s.begin(),s.end());
	cout<<"Min:"<<s<<endl;
	return 0;
}

