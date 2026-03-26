#include<iostream>
using namespace std;
int main()
{
	//Q17.Scan array of n integers.Find the minimum value in array.
	int *p;
	int n,i,min;
	cout<<"\nEnter the number of integers u want=";
	cin>>n;
	p=new int [n];
	cout<<"\nEnter "<<n<<" values=";
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
		
	}
	
	min=*(p+i);
	
	for(i=0;i<n;i++)
	{
		if(*(p+i)<min)
		{
			min=*(p+i);
		}
		
	}
	
	cout<<"\nThe minimum ="<<min;
	return 0;
}
