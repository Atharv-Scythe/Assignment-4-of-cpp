#include<iostream>
using namespace std;
int main()
{
	//Q3.Write a menu driven program for user to choose from any given 3 language.
	//e.g.If user enters 1,print marathi,for 2,print hindi and so on.
	
	int x;
	cout<<"\nEnter \n1 to chose Marathi \n2 for hindi\n3 for Englsih";
	cout<<"\nEnter your chioce";
	cin>>x;
	
	switch(x)
	{
		case 1:
			cout<<"\nMarathi";
			break;
			
		case 2:
			cout<<"\nHindi";
			break;
			
		case 3:
			cout<<"\nEnglish";
			break;
			
		default :
			cout<<"\nInvalid input";
	}
	
	return 0;
}
