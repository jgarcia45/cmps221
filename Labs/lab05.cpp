//Juan Garcia
//Mrs. Connolly, CMPS 221
//Lab 5

#include <iostream>
#include <cmath>
using namespace std;
#define MAX_COUNT 4
int main()
{
    //Part 1
    float z;
    cout << "Enter a value: ";
    cin >> z;

    for(int i = 0; i < MAX_COUNT; i++)
    {
        z = sqrt(z);
        cout << "The square root is: " << z << endl;
    }
    cout << endl;


    //Part 2
    int sum = 0, x = 200000000, y = -200000000;
    for(int i = 0; i < MAX_COUNT; i++)
    {
        int tmp;
        cout << "Enter an integer " << (i + 1) << ":";
        cin >> tmp;
        sum = sum + tmp;

        if (tmp < x)
            x = tmp;
        if (tmp > y)
            y = tmp;
    }
    cout << "The sum is " << sum << endl;
    cout << "The minimum of the temporary number is: " << x << endl;
    cout << "The maximun of the temporary number is: " << y << endl;

    return 0;
}
