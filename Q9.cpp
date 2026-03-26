#include<iostream>
using namespace std;
int main()
{
	/*Q9.Keep scanning a character from user until user enters '?'.Count only alphabets(capital or small) user has entered.
	The loop you have to use is given below.You have to complete the remaining code.
	while(1)
	{
		cin>>ch;
		if(ch=='?')
		{
			break;
		}
	}*/
	char ch;
	int cupper=0,clower=0;
	while('A')
	{
		cout<<"\nEnter character , enter ? to stop=";
		cin>>ch;
		if(ch=='?')
		{
			break;
		}
		
		if(ch>='A' && ch<='Z')
		{
			cupper++;
		}
		else if(ch>='a' && ch<='z')
		{
			clower++;
		}
		
	}
	
	cout<<"\nThe number of uppercase="<<cupper<<"\nThe number of lowercase ="<<clower;
	return 0;
}
