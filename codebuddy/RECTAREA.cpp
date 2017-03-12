#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int x1,y1,x2,y2,area=0;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	area = (x2-x1)*(y2-y1);
	if(area<0)
	{
		area = -area;

	}
	cout << area << endl;
	return 0;

}
