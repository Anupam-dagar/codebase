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

int main()
{
	long long int num1 = 10;
	long long int num2 = 5;
	long long int answer;
	long long int ans;
	answer = GCD(&num1,&num2);
	ans = lcm(&num1,&num2);
	cout << answer << endl << ans << endl;
}
