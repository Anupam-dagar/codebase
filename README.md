# codebase
A collection of c and c++ codes that I have written.<br>
# What next
I will create markdown version of all programs and create a jekyll blog for it.<br>
Uploading of Hackerearth programs is in progress.<br>
``` #include<bits/stdc++.h>
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
```
