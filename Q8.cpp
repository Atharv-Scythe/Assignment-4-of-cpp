#include<iostream>
using namespace std;
int main()
{
	/*
	Q8.Keep scanning a number from user until he enters 0.Count number of positive and negative integers user has entered.
	The loop you have to use is given below.You have to complete the remaining code.
	while(1)
	{
		cin>>num;
		if(num==0)
		{
			break;
		}
	}*/
	
	int num;
	int cp=0,cn=0;
	
	while(1)
	{
		printf("\nEnter the number , 0 to stop=");
		cin>>num;
		if(num==0)
		{
			cout<<"\nStoping";
			break;
		}
	
		if(num<0)
		{
			cn++;
		}
		else
		{
			cp++;
		}
		
		
	}
	cout<<"The no of positive ="<<cp<<"\nThe number of negetive ="<<cn;
	return 0;
}
