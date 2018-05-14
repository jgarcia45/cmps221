/* Juan Garcia
 * Mrs. Connolly, CMPS 221
 * February 17, 2013
 * Homework 6, Problem 2
 */

#include <iostream>
#include <cmath>
using namespace std;

void get_input(int&);
void get_input(int&, int&);
void get_input(int&, int&, int&);
void do_multiply(int, int);
void do_division(int, int);
void do_check(int);
void do_minimum(int, int, int);

int main()
{
    int choice;
    int a, b, c;

    do{
        cout << "Welcome to the CS221 Homework 2 Menu" << endl;
        cout << "========================================" << endl;
        cout << "1. Multiply two integers" << endl;
        cout << "2. Divide two integers" << endl;
        cout << "3. Check if a number is within the range 10-20" << endl;
        cout << "4. Find the minimum of a list of 3 numbers" << endl;
        cout << endl;
        cout << "0. Exit" << endl;
        cout << "========================================" << endl;
        cout << "Enter selection: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                get_input(a,b);
                do_multiply(a,b);
                break;
            case 2:
                get_input(a,b);
                do_division(a,b);
                break;
            case 3:
                get_input(a);
                do_check(a);
                break;
            case 4:
                get_input(a, b, c);
                do_minimum(a, b, c);
                break;
            case 0: cout <<"To exit, press e or E. To continue, press any value: ";
                      cin >> choice;
                      break;
            default: cout << "You entered an invalid choice! Try again." << endl;
        }

    }while (choice != 0 && choice != 'e' && choice != 'E');

    return 0;
}

void get_input(int& a)
{
    cout << "Enter an integer: ";
    cin >> a;
}
void get_input(int& a, int& b)
{
    cout << "Enter two integers: ";
    cin >> a >> b;
}
void get_input(int& a, int& b, int& c)
{
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
}
void do_multiply(int a, int b)
{
    int product;

    product = a * b;
    cout << "The product of both integers is: " << product << endl;
}
void do_division(int a, int b)
{
    double integer;

    integer = static_cast<double>(a) / b;
    cout << "The anwser is: " << integer << endl;
}
void do_check(int a)
{
    if (a < 10)
    {
        cout << "Integer is out of range." << endl;
    }
    else if (a > 20)
    {
        cout << "Integer is out of range." << endl;
    }
    else
    {
        cout << a << " is in range." << endl;
    }
}
void do_minimum(int a, int b, int c)
{
    if (a < b && a < c)
    {
        cout << a << " is the smallest integer." << endl;
    }
    else if (b < a && b < c)
    {
        cout << b << " is the smallest integer." << endl;
    }
    else
    {
        cout << c << " is the smallest integer." << endl;
    }
}
