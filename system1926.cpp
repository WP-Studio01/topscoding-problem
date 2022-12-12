#include <bits/stdc++.h>
using namespace std;
int dx,dy;
void move(char a)
{
	switch(a)
	{
		case 'E':
			dx++;
			break;
		case 'S':
			dy--;
			break;
		case 'W':
			dx--;
			break;
		case 'N':
			dy++;
			break;
		default:
			cout<<"Error!";
			abort();
			break;
	}
}
int main()
{
	string s;
	getline(cin,s);
	int t,cnt=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		move(s[cnt]);
		cnt++;
		if(cnt>=s.size())
			cnt=0;
	}
	cout<<dx<<" "<<dy;
	return 0;
}

