//Juan Garcia
//Mrs. Connolly, CMPS 221
//February 7,2013
//Lab 8

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int value;

    do
    {
        cout << "Enter a number between 1 and 10 or 99 to quit: ";
        cin >> value;

        switch (value)
        {
            case 1: for (int i = 0; i < 1; i++)
                    {
                        cout << " I ";
                    }
                    cout << endl;
                    cout << "The square root of 1 is " << sqrt(value) << "." << endl;
                    break;
            case 2: for (int i = 0; i < 2; i++)
                    {
                        cout << " II ";
                    }
                    cout << endl;
                    cout << "The square root of 2 is " << sqrt(value) << "." << endl;
                    break;
            case 3: for (int i = 0; i < 3; i++)
                    {
                        cout << " III ";
                    }
                    cout << endl;
                    cout << "The square root of 3 is " << sqrt(value) << "." << endl;
                    break;
            case 4: for (int i = 0; i < 4; i++)
                    {
                        cout << " IV ";
                    }
                    cout << endl;
                    cout << "The square root of 4 is " << sqrt(value) << "." << endl;
                    break;
            case 5: for (int i = 0; i < 5; i++)
                    {
                        cout << " V ";
                    }
                    cout << endl;
                    cout << "The square root of 5 is " << sqrt(value) << "." << endl;
                    break;
            case 6: for (int i = 0; i < 6; i++)
                    {
                        cout << " VI ";
                    }
                    cout << endl;
                    cout << "The square root of 6 is " << sqrt(value) << "." << endl;
                    break;
            case 7: for (int i = 0; i < 7; i++)
                    {
                        cout << " VII ";
                    }
                    cout << endl;
                    cout << "The square root of 7 is " << sqrt(value) << "." << endl;
                    break;
            case 8: for (int i = 0; i < 8; i++)
                    {
                        cout << " VIII ";
                    }
                    cout << endl;
                    cout << "The square root of 8 is " << sqrt(value) << "." << endl;
                    break;
            case 9: for (int i = 0; i < 9; i++)
                    {
                        cout << " IX ";
                    }
                    cout << endl;
                    cout << "The square root of 9 is " << sqrt(value) << "." << endl;
                    break;
            case 10: for (int i = 0; i < 10; i++)
                     {
                        cout << " X ";
                     }
                     cout << endl;
                     cout << "The square root of 10 is " << sqrt(value) << "." << endl;
                     break;
            case 99: cout << "Goodbye!" << endl;
                     return 0;
            default: cout << "You entered an invalid choice! Try again." << endl;
        }

    }while (value != 99);

     return 0;
}
