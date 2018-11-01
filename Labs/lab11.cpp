/* Juan Garcia
 * Mrs. Connolly, CMPS 221
 * February 28, 2013
 * Lab 11
 */

#include <iostream>
using namespace std;

void get_num(int*);

int main()
{
    //Question 1
    int n;
    int *nptr = &n;
    double value = 29.7;
    double *dptr = &value;

    cout << "The value is " << *dptr << "." << endl;
    cout << endl;

    //Question 2
    int set[10];

    for(int i = 0; i < 10; i++)
    {
        set[i] = i;
    }
    cout << "Value of set address " << set << endl;

    *(set+7) = 99;
    cout << set[7] << " " << *(set+7) << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << set[i] << " ";
    }
    cout << endl;

    get_num(nptr);
    cout << "at nptr: " << *nptr << endl;
    cout << endl;

    //Lab 11 Continued
    //Problem 1
    int a;
    int *a_ptr = &a;
    a = 33;

    cout << "a is: " << *a_ptr << endl;
    cout << "address of a is " << a_ptr << endl;
    cout << "address of a is " << &a << endl;
    cout << endl;

    //Problem 2
    (*a_ptr)++;
    cout << "a is: " << *a_ptr << endl;
    cout << endl;

    //Problem 3
    int iarr[5] = {5, 15, 25, 35, 45};
    int *tmp = iarr;

    cout << "address tmp points to " << tmp << endl;
    cout << "Value tmp points to " << *tmp << endl;
    tmp++;
    cout << "address tmp points to " << tmp << endl;
    cout << "Value tmp points to " << *tmp << endl;
    tmp += 2;
    cout << "address tmp points to " << tmp << endl;
    cout << "Value tmp points to " << *tmp << endl;
    tmp--;
    cout << "address tmp points to " << tmp << endl;
    cout << "Value tmp points to " << *tmp << endl;

    return 0;
}

//Question 3
void get_num(int* n)
{
    cout << "enter a number: " << endl;
    cin >> *n;
}
