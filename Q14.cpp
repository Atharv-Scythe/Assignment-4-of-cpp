#include<iostream>
using namespace std;
int main()
{
	//Q14.Scan n integers from user.Print addition of only even numbers out of n integers.
	
	int *p;
	int n,i,sum=0;
	cout<<"\nEnter the number of integers =";
	cin>>n;
	p=new int [n];
	cout<<"\nEnter "<<n<<" values=";
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
		if(*(p+i)%2==0)
		{
			sum+=*(p+i);
		}
	}
	
	
	
	cout<<"\nAddition of even numbers ="<<sum;
	return 0;
}
