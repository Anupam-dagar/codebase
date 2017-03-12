#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int x,y,z;
	cin >> x >> y >> z;
	if ((2*y == (x+z)) && (y*y == x*z))
	{
		cout << "Both" << endl;

	}

	else if(2*y == (x+z))
	{
		cout << "AP" << endl;

	}
	else if (y*y == x*z)
	{
		cout << "GP" << endl;

	}
	else
	{
		cout << "None" << endl;

	}
	return 0;

}
