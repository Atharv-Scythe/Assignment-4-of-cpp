#include<iostream>
using namespace std;
int main()
{
	/*
	Q18.Scan array of n integers from user.While scaning data,make sure that every number must be positive.
	Do not accept value if user enters negative value.
	Print addition of all integers.
	*/
	int *p;
	int n,i,sum=0;
	cout<<"\nEnter the number of integers =";
	cin>>n;
	p=new int [n];
	cout<<"\nEnter "<<n<<" positive values";
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter an integer=";
		cin>>*(p+i);
		if(*(p+i)<0)
		{
			cout<<"\nEnter again=";
			cin>>*(p+i);
			continue;
		}
		
	}
	
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<" ";
		
	}
	
	return 0;
}
