#include<iostream>
using namespace std;
int main()
{
	/*Q11.Scan array of n integers from user.Print addition of all integers.
	While printing the result,first print whole array then print addition.*/
	
	int *p;
	int n,i,sum=0;
	cout<<"\nEnter the number of integers u want=";
	cin>>n;
	p=new int [n];
	cout<<"\nEnter "<<n<<" values=";
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
		sum+=*(p+i);
	}
	
	cout<<"\nYour values=";
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<" ";
	}
	
	cout<<"\nAddition ="<<sum;
	return 0;
}
