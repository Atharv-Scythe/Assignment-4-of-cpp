#include<iostream>
using namespace std;
int main()
{
	//Q7.Scan array of 8 integers from user.Copy it in another array in reverse order.
	int num[8];
	cout<<"\nEnter 8 integers for array=";
	int i;
	for(i=0;i<=7;i++)
	{
		cin>>num[i];
	}
	int rev[8];
	for(i=7;i>=0;i--)
	{
		rev[7-i]=num[i];
	}
	
	cout<<"\nReversed array =";
	for(i=0;i<8;i++)
	{
		cout<<rev[i]<<" ";
	}
	
	return 0;
}
