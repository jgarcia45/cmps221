//Juan Garcia
//Mrs. Connolly, CMPS 221
//January 23,2013
//Homework 3

#include <iostream>
#include <cmath>
using namespace std; //So we can see cout and endl
int main ()
{
    //Declare test variable
    int count;

    //Ask user for input
    cout << "Enter the number of times you would like to loop: ";
    cin >> count;

    //Test
    for (int i = 0; i < count; i++)
    {
        int temp;
        cout << "Enter a value to cube" << endl;
        cin >> temp;

        //Output the value and the cube value
         cout << temp << " to the 3rd power is: " << pow(temp,3) << endl;

    }
    return 0;
}
