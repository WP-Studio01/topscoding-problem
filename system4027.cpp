#include <bits/stdc++.h>
/*��endl��ˢ�»�������������flush����Ϊ����������������ٶ�*/
#define endl "\n"
#define flush ""
using namespace std;
int tong[256];
int main()
{
	/*ͷ����Ϣ*/
 	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*������뿪ʼ*/
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

