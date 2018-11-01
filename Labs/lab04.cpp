//Lab4
//Juan Garcia
//CMPS 221

#include <iostream>
using namespace std;
int main()
{
    //Part 1:
    double val = 0;

    //Prompt user for value
    cout << "Enter a value less than 100: ";
    cin >> val;
    while (val < 1000)
    {
        //Multiply val by 10 and store in val
        val = val * 10;
        cout << "val  * 10 = " << val << endl;
    }

    cout << endl;

    //Part 2:
    char choice = 'a';
    int x,y;

    do {
        cout << "The menu has two options:" << endl;
        cout << "1.Add two numbers" << endl;
        cout << "2.Continue or quit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == '1')
        {
            cout << "Enter two numbers: ";
            cin >> x >> y;
            cout << "The sum of the two numbers is: " << x+y << endl;
        }
        if (choice == '2')
        {
            cout << "Enter Q or q to quit, or enter a value to continue: ";
            cin >> choice;
        }
    }
    while (choice != 'Q' && choice != 'q');

    return 0;
}
