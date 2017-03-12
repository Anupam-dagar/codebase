#include<bits/stdc++.h>
using namespace std;
long long int p[10000000];
int main()
{
	int t;
	long long int i,l,r;
	long int k;
	cin >> t;
	while(t--)
	{
		cin >> l >> r >> k;
		for(i=0;i<10000;i++)
		{
			p[i] = pow(k,i);

			//else if(p < l || p > r)
			//{
			//	cout << -1 << endl;
			//}
		}
		for(i=0;i<10000;i++)
		{
			if(p[i] >=l && p[i] <= r)
			{
				cout << p[i] << " ";
			}
			else if(p[i] < l || p[i] > r)
			{
				cout << -1;
			}
			cout << endl;
		}
	}
	return 0;
}
