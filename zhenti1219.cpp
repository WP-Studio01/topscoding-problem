#include <bits/stdc++.h>
/*��endl��ˢ�»�������������flush����Ϊ����������������ٶ�*/
#define endl "\n"
#define flush ""
using namespace std;
/*ͷ������*/
int main() {
	/*ͷ���ű�*/
	freopen("drink.in","r",stdin);
	freopen("drink.out","w",stdout);
 	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*������뿪ʼ*/
	double a,b,c,t;
	cin>>t>>a>>b>>c;
	t=t-a-b-c;
	cout<<fixed<<setprecision(0)<<t<<endl;
	if(t<0) cout<<"NO";
	return 0;
}

