//this code will delcare two integer and two float variables,
//assign user input value to those variable,
//and print those values to the screen.

#include <iostream>
using namespace std;
int main()
{
    //Declare 2 integer and 2 float variables.
    int x,y;
    double a,b,c,n,m;

        //Use the iostream library object "cout" to print to the screen.
    cout << "Homework 1" << endl;
    cout << " " << endl;

    //prompt user for input:
    cout << "Enter first double:" << endl;

    //Use the iostream library object "cin" to get the keyboard input.
    cin >> n;

    //prompt user for input:
    cout << "Enter second double:" << endl;

    //Use the iostream library object "cin" to get the keyboard input.
    cin >> m;

    //prompt user for input:
    cout << "Enter first integer:" << endl;

    //Use the iostream library object "cin" to get the keyboard input.
    cin >> x;

    //prompt user for input:
    cout << "Enter second integer:" << endl;

    //Use the iostream library object "cin" to get the keyboard input.
    cin >> y;

 //Perform a calculation with the values:
 a = n / m;
 b = n / x;
 c = x / y;
 //Print the value to screen:
 cout << n << "/" << m << " = " << a << endl;
 cout << n << "/" << x << " = " << b << endl;
 cout << x << "/" << y << " = " << c << endl;
 cout << " " << endl;

    //prompt user for two new integers and store them in the integer variables.
    cout << "Enter a new fist integer:" << endl;

    cin >> x;

    cout << "Enter an new second integer:" << endl;

    cin >> y;

//Perform a calculation with the values:
if (x>y)
//Print the value to screen:
{ cout << "The minimum of " << x << " and " << y << " is " << y << "." << endl;}
else { cout << "The minimum of " << x << " and " << y << " is " << x << "." <<  endl;}
    //Return a value of zero to the operating system and close
    return 0;
}

