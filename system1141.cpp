#include <bits/stdc++.h>
/*��endl��ˢ�»�������������flush����Ϊ����������������ٶ�*/
#define endl "\n"
#define flush ""
using namespace std;
/*ͷ������*/
int main() {
	/*ͷ���ű�*/
 	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*������뿪ʼ*/
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	cout<<"Max:"<<s<<endl;
	reverse(s.begin(),s.end());
	cout<<"Min:"<<s<<endl;
	return 0;
}

