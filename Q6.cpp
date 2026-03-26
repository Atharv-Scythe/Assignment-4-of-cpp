#include <iostream>
using namespace std;
int main()
{
    // Q6.Scan an array of 6 integers from user.Find the maximum value in the array.

    int num[6];
    int i = 0;

    cout << "\nEnter 6 integers for array = ";

    for (i = 0; i < 6; i++)
    {
        cin >> num[i];
    }

    int max = num[0];

    for (i = 0; i < 6; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }

    cout << "\nMaximum = " << max;

    return 0;
}
