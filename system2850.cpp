#include <bits/stdc++.h>
/*��endl��ˢ�»�������������flush����Ϊ����������������ٶ�*/
#define endl "\n"
#define flush ""
using namespace std;
struct Node
{
	string name;
	string score;
}a[505];
bool cmp(Node x,Node y)
{
	if(x.score!=y.score)
	{
		if(x.score.size()!=y.score.size())
			return x.score.size()>y.score.size();
		else
			return x.score>y.score;
	}
	return x.name<y.name;
}
int main()
{
	/*ͷ����Ϣ*/
 	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*������뿪ʼ*/
	register int n;
	cin>>n;
	for(register int i=1;i<=n;i++)
	{
		cin>>a[i].name>>a[i].score;
	}
	sort(a+1,a+1+n,cmp);
	for(register int i=1;i<=n;i++)
	{
		cout<<a[i].name<<endl;
	}
	return 0;
}

