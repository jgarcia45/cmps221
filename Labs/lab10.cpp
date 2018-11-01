/* Juan Garcia
 * Mrs.Connolly, CMPS 221
 * February 19, 2013
 * Lab 10
 */

#include <iostream> //for standard IO
#include <fstream> //for file IO
#include <cstdio> //for C- style formatting
#include <iomanip>//for C++ (cout) formatting
#include <cstdlib> //for exit function

using namespace std;

int main()
{
    double n;
    double sum = 0;
    double avg;
    int count = 0;

    ifstream inFile;
    inFile.open("lab10Input.txt");
    if(!inFile)
    {
        cout << "file open error, exiting...";
        exit(1);
    }

    ofstream outFile;
    outFile.open("lab10Output");
    if(!outFile)
    {
        cout << "file open error, exiting...";
        exit(1);
    }

    while(inFile >> n)
    {
        sum += n;

        outFile << setprecision(2) << fixed << setw(10) << n;
        printf("%10.2f", n);
        count ++;
        if(count % 4 == 0)
        {
            outFile << endl;
            printf("\n");
        }
    }
    cout << endl;
    cout << "The sum is " << sum << "." << endl;
    outFile << "The sum is " << sum << "." << endl;
    cout << "The average is " << sum / count << "." << endl;
    outFile << "The average is " << sum / count << "." << endl;

    inFile.close();
    outFile.close();

    return 0;
}
