//Lab 3
//Juan Garcia
//CMPS 221
#include <iostream>
using namespace std;
int main()
{
    //Declare variables
    int x;

    //First Requirement
    cout << "The size of an integer is: " << sizeof(int) << endl;
    cout << "The size of an long integer is: " << sizeof(long) << endl;
    cout << "The size of a double is: " << sizeof(double) << endl;
    cout << endl;

    //Second Requirement
    cout << "Pick a number between 1 and 10: ";
    cin >> x;

    if(x<1)
        cout << "The number you entered is incorrect." << endl;
    else if(x>10)
       cout << "The number you entered is incorrect." << endl;
    else
       cout << "The number you chose is " << x << "." << endl;
    return 0;
}
