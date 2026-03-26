#include<iostream>
using namespace std;
int main()
{
	//Q4.Write a menu driven program for arithmetic operations of 2 integers.
	int x,y;
	int choice;
	cout<<"\nEnter 2 integers=";
	cin>>x>>y;
	
	cout<<"\nEnter \n! for addition \n2 for Subtraction \n3 for multi \n4 for division ";
	cout<<"\nEnter your choice=";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
				cout<<"\nAddition = "<<x+y;
				break;
				
		case 2:
				cout<<"\nSubtraction = "<<x-y;
				break;
				
		case 3:
				cout<<"\nMulti = "<<x*y;
				break;
				
		case 4:
				cout<<"\n Division = "<<x/(float)y;
				break;
				
		default:
				cout<<"\nInvalid Input";
				
	}
	
	return 0;
}

