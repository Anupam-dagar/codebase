#include<bits/stdc++.h>
using namespace std;

long long int add(long long int *num1,long long int *num2)
{
	long long int answer;
	answer = *num1 + *num2;
	return answer;
}

long long int subtract(long long int *num1,long long int *num2)
{
	long long int answer;
	answer = *num1 - *num2;
	return answer;
}

long long int multiply(long long int *num1,long long int *num2)
{
	long long int answer;
	answer = *num1 * *num2;
	return answer;
}

double divide(long long int *num1,long long int *num2)
{
	double answer;
	answer = (double)*num1 / (double)*num2;
	return answer;
}

long long int GCD(long long int *num1,long long int *num2)
{
	long long int answer;
	long long int temp;
	temp = *num1 % *num2;
	if(temp == 0)
	{
		answer = *num2;
	}
	else 
	{	
		answer = temp;
	}
	return answer;
}

long long int lcm(long long int *num1,long long int *num2)
{
	long long int answer;
	answer = (*num1 * *num2)/GCD(num1,num2);
	return answer;
}

long long int factorial(long long int *num1)
{
	long long int answer = 1,i;
	for(i=2;i<=*num1;i++)
	{
		answer = (answer % 10000007) * (i % 10000007);
	}
	return answer;
}

int main()
{
	long long int num1 = 100;
	long long int num2 = 5;
	long long int answer;
	double ans;
	int input;
	cout << "Welcome to Large Values Calculator\n";
	cout << "Please note for large number multiplications,ensure that answer is within 10^18 else it may produce wrong result.\n";
	while(1)
	{
		cout << "Select a valid option:\n";
		cout << "1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.Division.\n5.Greatest Common Divisor(GCD).\n6.Least Common Multiple(LCM).\n7.Factorial.\n8.Exit.\n";
		cin >> input;
		switch(input)
		{
			case 1: cout << "Enter number one:\n";
				cin >> num1;
				cout << "Enter number two:\n";
				cin >> num2;
				cout << endl;
				answer = add(&num1,&num2);
				cout << answer << endl << endl;
				break;
			case 2: cout << "Enter number one:\n";
				cin >> num1;
				cout << "Enter number two:\n";
				cin >> num2;
				cout << endl;
				answer = subtract(&num1,&num2);
				cout << answer << endl << endl;
				break;
			case 3: cout << "Enter number one:\n";
				cin >> num1;
				cout << "Enter number two:\n";
				cin >> num2;
				cout << endl;
				answer = multiply(&num1,&num2);
				cout << answer << endl << endl;
				break;
			case 4: cout << "Enter number one:\n";
				cin >> num1;
				cout << "Enter number two:\n";
				cin >> num2;
				cout << endl;
				ans = divide(&num1,&num2);
				cout << ans << endl << endl;
				break;
			case 5: cout << "Enter number one:\n";
				cin >> num1;
				cout << "Enter number two:\n";
				cin >> num2;
				cout << endl;
				answer = GCD(&num1,&num2);
				cout << answer << endl << endl;
				break;
			case 6: cout << "Enter number one:\n";
				cin >> num1;
				cout << "Enter number two:\n";
				cin >> num2;
				cout << endl;
				answer = lcm(&num1,&num2);
				cout << answer << endl << endl;	
			case 7: cout << "Enter number\n";
				cin >> num1;
				cout << endl;
				answer = factorial(&num1);
				cout << answer << endl << endl;
				break;
			case 8: cout << "Exiting...\n";
				break;
			default:cout << "Enter a valid input.\n";
		}
		if(input == 8)
		{
			break;
		}
	}
}
