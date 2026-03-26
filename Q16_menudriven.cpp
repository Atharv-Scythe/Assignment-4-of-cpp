#include <iostream>
using namespace std;
int main()
{
	/*Q16.WAP to ask user to choose between circle and rectangle.If user choose circle,ask him to choose between 
	area and circumference.Print the result for users choice.Similarly if user chooses rectangle,ask him
	to choose between area and perimeter.Print result according to user's choice.
	Write 2 different codes for this program
	
	-using switch case.(declare all variable outside switch always)*/

    int shape, choice;
    float radius, length, breadth;
    cout << "Choose Shape:\n1. Circle\n2. Rectangle\nEnter choice: ";
    cin >> shape;

    switch (shape)
    {
        case 1:
        
            cout << "1. Area\n2. Circumference\nEnter choice: ";
            cin >> choice;

            cout << "Enter radius: ";
            cin >> radius;

            switch (choice)
            {
                case 1:
                    cout << "Area = " << 3.14 * radius * radius;
                    break;

                case 2:
                    cout << "Circumference = " << 2 * 3.14 * radius;
                    break;

                default:
                    cout << "Invalid choice";
            }
            break;
        

        case 2:
        
            cout << "1. Area\n2. Perimeter\nEnter choice: ";
            cin >> choice;

            cout << "Enter length and breadth: ";
            cin >> length >> breadth;

            switch (choice)
            {
                case 1:
                    cout << "Area = " << length * breadth;
                    break;

                case 2:
                    cout << "Perimeter = " << 2 * (length + breadth);
                    break;

                default:
                    cout << "Invalid choice";
            }
            break;
        

        default:
            cout << "Invalid shape choice";
        
    }

    return 0;
}
