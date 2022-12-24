#include <bits/stdc++.h>
#include <exception>
/*让endl不刷新缓冲区，并忽略flush，因为这会严重拖慢流的速度*/
#define endl "\n"
#define flush ""
using namespace std;
/*头部数据*/
int a[205],n;
bitset<205> shai;
void dfs(int dep, int t) {
	if(t <= 0) {
		if(t==0) {
			cout<<dep<<endl;
			return ;
		} else {
			throw exception();
		}
	}
	for(int i=1; i<t; i++) {
		if(shai[i] == 0 && t-i >= 0) {
			a[dep] = i;
			dfs(dep+1,t-i);
		}
	}
}
int main() {
	/*头部脚本*/
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*初始化素数筛*/
	for(int i=1; i<=205; i++) {
		for(int j=i; j<=205; j+=i) {
			shai[j]=1;
		}
	}
	/*主体代码开始*/
	cin>>n;
	try {
		dfs(1,n);
	} catch (exception &ex) {
		cerr<<"Error";
		abort();
	}
	return 0;
}

