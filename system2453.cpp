#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a;
	int n;
	cin>>n;
	while(n--)
	{
		int t;
		cin>>t;
		a.push_back(t);
	}
	int b,c;
	cin>>b>>c;
	a.insert(a.begin()+b-1,c);
	for_each(a.begin(),a.end(),[](int n){cout<<n<<"\n";});
	return 0;
}

