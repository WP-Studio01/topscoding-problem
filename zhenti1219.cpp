#include <bits/stdc++.h>
/*让endl不刷新缓冲区，并忽略flush，因为这会严重拖慢流的速度*/
#define endl "\n"
#define flush ""
using namespace std;
/*头部数据*/
int main() {
	/*头部脚本*/
	freopen("drink.in","r",stdin);
	freopen("drink.out","w",stdout);
 	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*主体代码开始*/
	double a,b,c,t;
	cin>>t>>a>>b>>c;
	t=t-a-b-c;
	cout<<fixed<<setprecision(0)<<t<<endl;
	if(t<0) cout<<"NO";
	return 0;
}

