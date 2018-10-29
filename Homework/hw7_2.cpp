/* Juan Garcia
 * Mrs. Connolly, CMPS 221
 * February 21, 2013
 * Homework 7, Problem 2
 */

#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdio>
#include <iomanip>
#include <cstdlib>
#define SZ 24

using namespace std;
bool empty(int);

int main()
{
    double sum;
    double addition;
    double multi;
    double avg;
    double deviation;
    int choice;
    int arr[SZ];
    for(int i =0;i < SZ; i++)
    {
        arr[i] = 0;
    }

    do{
        cout << "Welcome to the CS221 Homework 7 Menu" << endl;
        cout << "==========================================" << endl;
        cout << "1. Read a list of integers from a file into an array." << endl;
        cout << "2. Multiply all integers in the array." << endl;
        cout << "3. Calculate the average and stadnard deviation for all the integers in the array." << endl;
        cout << "0. Exit" << endl;
        cout << "==========================================" << endl;
        cout << "Enter Selection: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                {
                ifstream inFile;
                inFile.open("hw7_1_in.txt");
                if(!inFile)
                {
                    cout << "file open error, exiting...";
                    exit(1);
                }
                for(int i = 0;i < SZ; i++)
                {
                    inFile >> arr[i];
                }
                inFile.close();
                break;
                }
            case 2:
                {
                if(empty(arr[0]))
                {
                    cout << "Error. Please select Option 1" << endl;
                    break;
                }
                for(int i = 0;i < SZ; i++)
                {
                    sum += i;
                    multi *= arr[i];
                }
                cout << setprecision(2) << fixed << showpoint << multi << endl;
                cout << "The product of all integers in the array is " << multi << "." << endl;
                break;
                }
            case 3:
                {
                if(empty(arr[0]))
                {
                    cout << "Error. Please select Option 1" << endl;
                }

                avg = sum / SZ;

                cout << setprecision(2) << fixed << showpoint << avg << endl;
                cout << "The average of the integers in the array is " << avg << "." << endl;

                for(int i = 0; i < SZ; i++)
                {
                    addition = addition + (avg - arr[i]) * (avg - arr[i]);
                }

                if(arr[1])
                {
                    cout << "Error, can't perform deiation." << endl;
                    break;
                }
                else
                {
                    deviation = sqrt(addition / SZ-1);
                    cout << setprecision(2) << fixed << showpoint << deviation << endl;
                    cout << "The Standard Deviation is " << deviation << "." << endl;
                }

                break;
                }
            case 0:
                {
                cout << "Good-bye!" << endl;
                break;
                }
            default:
                {
                cout << "You entered an invalid choice! Try again." << endl;
                }
        }

      }while(choice != 0);
    return 0;
}

bool empty(int n)
{
    if(n==0)
        return true;
    else
        return false;
}
