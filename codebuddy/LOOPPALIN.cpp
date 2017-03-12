#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,t,check;
	string s;
	cin >> t;
	while(t--)
	{
		check = 0;
		cin >> s;
		for(i=0;i<s.length();i++)
		{
			if(s[i] != s[s.length()-i-1])
			{
				check = 1;
				break;

			}

		}
		if(check == 1)
		{
			cout << "No\n";

		}
		else if(check == 0)
		{
			cout << "Yes\n";

		}

	}

}
