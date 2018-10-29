/* Juan Garcia
 * Mrs. Connolly, CMPS 221
 * February 10, 2013
 * Homework 5
 */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char choice = 'a';
    double x,y;

    do
    {
        cout << "Choose the operator of your choice." << endl;
        cout << "1: Addition" << endl;
        cout << "2: Subtraction" << endl;
        cout << "3: Multiplication" << endl;
        cout << "4: Division" << endl;
        cout << "5: Power" << endl;
        cout << "6: Square Root" << endl;
        cout << "7: Absolute" << endl;
        cout << "Enter your choice or press 9 to quit: ";
        cin >> choice;

        switch (choice)
        {
            case '1': cout << "Enter two values to add: ";
                    cin >> x >> y;
                    cout << x << " + " << y << " = " << x + y << endl;
                    cout << endl;
                    break;
            case '2': cout << "Enter two values to subtract: ";
                    cin >> x >> y;
                    cout << x << " - " << y << " = " << x - y << endl;
                    cout << endl;
                    break;
            case '3': cout << "Enter two values to multiply: ";
                    cin >> x >> y;
                    cout << x << " * " << y << " = " << x * y << endl;
                    cout << endl;
                    break;
            case '4': cout << "Enter two values to divide: ";
                    cin >> x >> y;
                    cout << x << " / " << y << " = " << x / y << endl;
                    cout << endl;
                    break;
            case '5': cout << "Enter a value to power, then enter the power of the value: ";
                    cin >> x >> y;
                    cout << x << " ^ " << y << " = " << (double)pow(x, y) <<endl;
                    cout << endl;
                    break;
            case '6': cout << "Enter a value to square root: ";
                    cin >> x;
                    cout << "The square root of " << x << " is " << (double)sqrt(x) << "." << endl;
                    cout << endl;
                    break;
            case '7': cout << "Enter a value to find the absolute number: ";
                    cin >> x;
                    cout << "The absolute value of " << x << " is " << (int)abs(x) << "." << endl;
                    cout << endl;
                    break;
            case '9': cout << "Goodbye! Have a great day." << endl;
                      break;
            default: cout << "You didn't enter a correct choice. Please try again." << endl;
        }
    } while (choice != '9');

     return 0;
}
