#include <bits/stdc++.h>
#include <algorithm>
/*��endl��ˢ�»�������������flush����Ϊ����������������ٶ�*/
#define endl "\n"
#define flush ""
using namespace std;
/*ͷ������*/
typedef long long LL;
int a[100005],b[100005];
int main()
{
	/*ͷ���ű�*/
 	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*������뿪ʼ*/
	set<LL> st;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		st.insert(a[i]);
	}
	for(int i=1;i<=m;i++)
	{
		cin>>b[i];
		st.insert(b[i]);
	}
	for(auto &i : st)
	{
		cout<<i<<" ";
	}
	return 0;
}

