/* Juan Garcia
 * Mrs. Connolly, CMPS 221
 * February 21, 2013
 * Homework 7, Problem 1
 */

#include <iostream>
#include <fstream>
#include <cstdio>
#include <iomanipo>
#include <cstdlib>

using namespace std;

int main()
{
    int x;
    int n;

    ifstream inFile;
    inFile.open("hw7_in.txt");
    if(!inFile)
    {
        cout << "file open error, exiting...";
        exit(1);
    }

    ofstream outFile;
    outFile.open("hw7_in.txt.norm");
    if(!outFile)
    {
        cout << "file open error, exiting...";
        exit(1);
    }

    while(inFile >> n)
    {
        x = "    ";
        DOE = doe;
        JOHN = john;
        endl = endl, endl;
    }

    inFile.close();
    outFile.close();

    return 0;
}
