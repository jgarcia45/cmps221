/* Juan Garcia
 * Mrs. Connolly, CMPS 221
 * February 12, 2013
 * Lab 9
 */

#include <iostream>
#define MAX 5
using namespace std;
int main()
{
    double product = 1;
    double arr[MAX];

    for (int i = 0; i < MAX; i++)
    {
        cout << "Enter double: ";
        cin >> arr[i];
        product = product * arr[i];
    }
    cout << endl;

    cout << "The product of ";
    for (int i = 0; i < MAX; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " is " << product << "." << endl;

    return 0;
}
