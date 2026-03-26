#include<iostream>
using namespace std;
int main()
{
	//Q12.Create memory at runtime for n integers.Scan n integers from user.Count how many times 10 is present in the array.
	
	int *p;
	int n,i,c=0;
	cout<<"\nEnter the number of integers u want=";
	cin>>n;
	p=new int [n];
	cout<<"\nEnter "<<n<<" values=";
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
		
		if(*(p+i)==10)
		{
			c++;
		}
	}
	
	cout<<"\nThe total occurences of 10 ="<<c;
	
	return 0;
}
