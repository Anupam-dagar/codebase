#include<bits/stdc++.h>
using namespace std;

//function to print 0
void zero()
{
	int i,j;
	for(i=0;i<4;i++)
	{
		if(i == 0 || i == 3)
		{
			cout << " ";
		}
		else
		{
			cout << "__";
		}
	}
	cout << endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==3)
			{
				if(j==0 || j == 3)
				{
					cout << "|";
				}
				else
				{
					cout << "__";
				}
			}
			else if(j == 0 || j == 3)
			{
				cout << "|";
			}
			else 
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
}

//function to print 1
void one()
{
	int i;
	cout << " /|\n/ |\n";
	for(i=0;i<3;i++)
	{
		if(i==2)
		{
			cout << "__|__\n";
		}
		else 	
			cout << "  |\n";
	}
}

//function to print 2
void two()
{
	int i,j,k=5,z;
	for(i=0;i<6;i++)
	{
		if(i == 0)
		{
			cout << "  ____\n";
		}
		else if(i == 1)
		{
			cout << " /    \\\n";
		}
		else if(i == 2)
		{
			cout << "|      )\n";
		}
		else if (i == 3 || i == 4) 
		{
			for(j=0;j<5,k>=1;j++)
			{	z=0;
				while(z != k)
				{
					cout << " ";
					z++;
				}
				if(z == k)
				{
					cout << " /\n";
				}
				k--;
			}
		}
		else 
			cout << "(______\n";

	}
}

//Function in progress three()
void three()
{
	int i,j;
	for(i=0;i<4;i++)
	{
		cout << "__";
	}
	cout << endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<6;j++)
		{
			if(j)
			cout << "  ";
		}
	}
}

int main()
{
	int n,i,j,d = 175;
	cout << "enter 0,1 or 2\n";
	cin >> n;
	switch(n)
	{
		case 0: zero();
			break;
		case 1: one();
			break;
		case 2: two();
			break;
		default:cout << "enter a valid input\n";
	}
	return 0;
}
