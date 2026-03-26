#include <iostream>
using namespace std;
int main()
{
	//Q15.Write a menu driven program to find area of rectangle,perimeter of rectangle.
    int choice;
    int length,width;

    cout << "1. Area of Rectangle\n";
    cout << "2. Perimeter of Rectangle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter length and width ";
    cin >> length >> width;

    switch (choice)
    {
        case 1:
            cout << "Area = " << length * width;
            break;
       

        case 2:
            cout << "Perimeter = " << 2 * (length + width);
            break;
        

        default:
            cout << "Invalid choice";
        
    }

    return 0;
}
