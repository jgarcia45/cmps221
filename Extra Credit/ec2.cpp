/* Juan Garcia
 * Mrs. Connolly, CMPS221
 * February 19, 2013
 * Extra Credit 2
 */

#include <iostream>
#include <algorithm>
#define SZ 5
using namespace std;

void reverse(double [], int);
int locate_largest(int [], int);
void rotate_right(double [], int);

int main()
{
    //Problem 1
    char ch;
    char title[] = "Titanic";
    ch = title[1];
    title[3] = ch;
    cout << title << endl;
    cout << ch << endl;

    //Problem 2
    const int LENGTH = 21;
    char message[LENGTH];
    cout << "Enter a sentence on the line below." << endl;
    cin >> message;
    cout << message << endl;

    //Problem 3
    cout << "Enter a sentence on the line below." << endl;
    cin.getline(message, LENGTH, '\n');
    cout << message << endl;
    cout << endl;

    //Problem 4
    double arr[SZ] = {5.8, 2.6, 9.0, 3.4, 7.1};

    //before function
    cout << "Subscript: 0 1 2 3 4" << endl;
    cout << "Value: ";
    for(int i = 0; i < SZ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    //after function
    cout << "Subscript: 0 1 2 3 4" << endl;
    cout << "Value: ";
    reverse(arr, SZ);
    for(int i = 0; i < SZ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
    //Problem 5
    int ar[SZ] = {58, 26, 90, 34, 71};

    cout << "Subscript: 0 1 2 3 4" << endl;
    cout << "Value: ";
    for(int i = 0; i < SZ; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    locate_largest(ar, SZ);
    cout << endl;
    //Problem 6
    double a[SZ] = {5.8, 2.6, 9.1, 3.4, 7.0};

    cout << "Subscript: 0 1 2 3 4" << endl;
    cout << "Value: ";
    for(int i = 0; i < SZ; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Subscript: 0 1 2 3 4" << endl;
    cout << "Value: ";
    rotate_right(a, SZ);
    for(int i = 0; i < SZ; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
void reverse(double arr[], int x)
{
    double tmp;
    int h;

    for(int i = 0; i < x/2; i++)
    {
        h = x-(1+i);
        tmp = arr[i];
        arr[i] = arr[h];
        arr[h] = tmp;
    }
}
int locate_largest(int arr[], int y)
{
    int max = -1000;
    int n;

    for(int i = 0; i < y; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            n = i;
        }
    }
    cout << "Subscript " << n << " is the largest." << endl;
}
void rotate_right(double arr[], int n)
{
    double tmp;
    int h;

    tmp = arr[n - 1];

    for(int i = n - 1; i > 0; i--)
    {
        h = (i - 1);
        arr[i] = arr[h];
    }
    arr[0] = tmp;
}
