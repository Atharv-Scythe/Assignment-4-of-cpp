#include<iostream>
using namespace std;
int main()
{
	//Q1.Scan 3 integers from user.Find the largest value using conditional operator.
	int num1,num2,num3,max;
	cout<<"\nEnter three numbers =";
	cin>>num1>>num2>>num3;
	
	max=num1>num2?num1:num2;
	max=max>num3?max:num3;
	
	cout<<"\nThe maximum number ="<<max;
	
	return 0;
}
