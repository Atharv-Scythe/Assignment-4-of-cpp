#include<iostream>
using namespace std;
int main()
{
	/*Q10_1.Scan a number from user.Print addition of its digits.*/
	
	int num;
	cout<<"\nEnter a number=";
	cin>>num;
	int rem,sum=0;
	while(num>0)
	{
		rem=num%10;
		sum+=rem;
		num=num/10;
	}
	
	cout<<"\nThe sum of digits ="<<sum;
	return 0;
}
