#include<iostream>
using namespace std;
int main()
{
	/*Q13.Scan 3 integers from user.Print their addition in following main() function.
	Do not declare your own variable.Draw memory diagram in notebook.Think about memory first.
	int main()
	{
		int *p;
	}*/
	
	int *p;
	int add=0;
	p=new int [3];
	cout<<"\nEnter 3 integers=";
	for(int i=0;i<3;i++)
	{
		cin>>*(p+i);
		add+=*(p+i);
	}
	
	cout<<"\nThe addition ="<<add;
	
	return 0;
}
