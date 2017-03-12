#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t,a,b,maxx=0;;
	cin >> t;
	while(t--)
	{
		cin >> a >> b;
		maxx = max(a,b);
		for(i=maxx;i<=a*b;i++)
		{
			if(i%a == 0 && i%b == 0)
			{
				cout << i << endl;
				break;

			}

		}

	}

	return 0;

}
