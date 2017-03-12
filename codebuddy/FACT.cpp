#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t;
	unsigned long long int n,fact;
	cin >> t;
	while(t--)
	{
		fact = 1;
		cin >> n;
		for(i=2;i<=n;i++)
		{
			fact = (fact * i) % 1000000007;

		}
		cout << fact << endl;

	}
	return 0;

}
