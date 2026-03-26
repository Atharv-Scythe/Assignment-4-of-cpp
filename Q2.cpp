#include<iostream>
using namespace std;
int main()
{
	//Q2.Scan a character from user.Check if it is capital alphabet or small alphabet.
	char ch;
	cout<<"\nEnter a character=";
	cin>>ch;
	
	if(ch>='A' && ch<='Z')
	{
		cout<<"\nThe entered character is Capital";
	}
	else if(ch>='a' && ch<='z')
	{
		cout<<"\nThe Entered character is lowercase";
	}
	else
	{
		cout<<"\nNot an alphabet";
	}
	
	return 0;
}

