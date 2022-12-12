#include <bits/stdc++.h>
typedef int RINT;
#define int long long
using namespace std;
int jc(RINT n)
{
	if(n==1) return 1;
	return n*jc(n-1);
}
RINT main()
{
	RINT n;
	cin>>n;
	cout<<jc(n);
	return 0;
}

