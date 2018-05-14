//Juan Garcia
//Mrs. Connolly, CMPS221
//Homework 2
//problem 1

#include <iostream>
using namespace std;
int main()
{
    //Declare variables
    int n;
    int count=0;
    int Fi = 0;
    int F1 = Fi + 1;
    int F2 = F1 + Fi;

    //Ask user for integer
    cout << "Enter the number of Fibonacci numbers to compute: ";
    cin >> n;
    cout << "The first " << n << " Fibonacci numbers are: " << endl;

    while (n < 0)
    {
        cout << "Invalid Value"<< endl;
        cout << "Re-enter a value: ";
        cin >> n;
    }
    for (count = 0; count < n; count++)
    {
        Fi = F2 + F1;
        cout << F1 << " ";
        F1 = F2;
        F2 = Fi;
    }
    cout << endl;

    return 0;
}
