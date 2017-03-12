#include<bits/stdc++.h>
#include<map>
using namespace std;
int freq[100000];
int main()
{
	int g,i,l,ctr=0;
	string s;
	cin >> s;
	l = s.length();
	for(i = 0; i < l; i++)
	{
		freq[s[i] - 'a']++;
	}
	for(i = 0; i < 26; i++)
	{
		if(freq[i]>0)
		{
			ctr++;
		}
	}
	cout << ctr << endl;
for(i=0;i<l;i++)
{
g = max(freq[i],freq[l]);
cout << g << endl;
}
	return 0;
}
