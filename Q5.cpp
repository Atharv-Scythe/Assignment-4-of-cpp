#include<iostream>
using namespace std;
int main()
{
	
	/*Q5.Scan year from user.Check if it is leap or not.
	If year is multiple of 100,then it must be multiple of 400 to become leap.
	If it is not multiple of 100,then it must be multiple of 4 to become leap.
	Otherwise it is not leap year.
	*/
	
	int yr;
	cout<<"\nEnter year=";
	cin>>yr;
	
	if (yr % 100 == 0)
    {
        if (yr % 400 == 0)
        {
            cout << "Leap Year";
        }
        else
        {
            cout << "Not a Leap Year";
        }
    }
    else
    {
        if (yr % 4 == 0)
        {
            cout << "Leap Year";
        }
        else
        {
            cout << "Not a Leap Year";
        }
    }

	return 0;
	
}
