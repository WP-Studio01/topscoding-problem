#include <bits/stdc++.h>
#include <exception>
/*��endl��ˢ�»�������������flush����Ϊ����������������ٶ�*/
#define endl "\n"
#define flush ""
using namespace std;
/*ͷ������*/
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
	/*ͷ���ű�*/
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*��ʼ������ɸ*/
	for(int i=1; i<=205; i++) {
		for(int j=i; j<=205; j+=i) {
			shai[j]=1;
		}
	}
	/*������뿪ʼ*/
	cin>>n;
	try {
		dfs(1,n);
	} catch (exception &ex) {
		cerr<<"Error";
		abort();
	}
	return 0;
}

