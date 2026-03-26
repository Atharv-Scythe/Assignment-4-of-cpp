#include<iostream>
using namespace std;
int main()
{
	/*Q10_2.Scan a range from user.Print addition of only even values in the range.*/
	cout<<"\nEnter range form _ to _=";
	int i,x,y,temp,sum=0;
	cin>>x>>y;
	
	if(y<x)
	{
		temp=x;
		x=y;
		y=temp;
	}
	
	for(i=x;i<=y;i++)
	{
		if(i%2==0)
		{
			sum+=i;
		}
		
	}
	
	cout<<"\nAddition of the even number ="<<sum;
	
	return 0;
}
