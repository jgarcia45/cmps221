//Homework 2
//Problem 2
//Juan Garcia
//Mrs. Connolly
//CMPS221

#include <iostream>
using namespace std;
int main()
{
    //Declaring integers
    char choice = 'a';
    int x,y,z;
    double integer;

    do{
        cout << "Welcome to the CS221 Homework 2 Menu" << endl;
        cout << endl;
        cout << "1. Multiply two integers" << endl;
        cout << "2. Divide two integers" << endl;
        cout << "3. Check if a number is within the range 10-20" << endl;
        cout << "4. Find the minimum of a list of 3 numbers" << endl;
        cout << endl;
        cout << "0. Exit" << endl;
        cout << endl;
        cout << "Enter selection: ";
        cin >> choice;

        if (choice == '1')
        {
           cout << "Enter two integers: ";
           cin >> x >> y;
           cout << "The product of both integers is: " << x*y << endl;
        }
        else if (choice == '2')
        {
           cout << "Enter two integers: ";
           cin >> x >> y;
           integer = static_cast<double>(x) / y;
           cout << "The anwser is: " << integer << endl;
        }
        else if (choice == '3')
        {
           cout << "Enter an integer: ";
           cin >> x;

           if (x < 10)
           {
              cout << "Integer is out of range." << endl;
           }
           else if (x > 20)
           {
              cout << "Integer is out of range." << endl;
           }
           else
           {
              cout << x << " is in range." << endl;
           }
        }
        if (choice == '4')
        {
           cout << "Enter three integers: ";
           cin >> x >> y >> z;

           if ( x < y && x < z)
           {
              cout << x << " is the smallest integer" << endl;
           }
           else if ( y < x && y < z)
           {
              cout << y << " is the smallest integer" << endl;
           }
           else
           {
              cout << z << " is the smallest integer" << endl;
           }
        }
        if (choice == '0')
        {
           cout << "To exit, press e or E. To continue, press any value: ";
           cin >> choice;
        }
    }
        while (choice != 'e' && choice != 'E');
    return 0;
}
