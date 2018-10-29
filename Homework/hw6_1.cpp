/* Juan Garcia
 * Mrs. Connolly, CMPS 221
 * February 12, 2013
 * Homework 6, Problem 1
 */

#include <iostream>
#include <cmath>
using namespace std;

void print_min(int);
void print_min(double);
int find_min(int, int);
double find_min(double, double);
int find_min(int, int, int);
void get_input(int&, int&);
void get_input(double&, double&);
void get_input(int&, int&, int&);

int main()
{
    int num1, num2, num3;
    double dnum1, dnum2;

    get_input(num1, num2);
    print_min(find_min(num1, num2));

    get_input(dnum1, dnum2);
    print_min(find_min(dnum1, dnum2));

    get_input(num1, num2, num3);
    print_min(find_min(num1, num2, num3));

    return 0;
}
void print_min(int x)
{
    cout << "The minimum is " << x << ".";
    cout << endl;
}
void print_min(double x)
{
    cout << "The minimum is " << x << ".";
    cout << endl;
}
int find_min(int x, int y)
{
    int min;

    if (x < y)
        min = x;
    else
        min = y;

    return min;
}
double find_min(double x, double y)
{
    double min;

    if (x < y)
        min = x;
    else
        min = y;

    return min;
}
int find_min(int x, int y, int z)
{
    int min;

    if (x < y && x < z)
        min = x;
    else if (y < x && y < z)
        min = y;
    else
        min = z;

    return min;
}
void get_input(int& x, int& y)
{
    cout << "Enter two integers: ";
    cin >> x >> y;
}
void get_input(double& x, double& y)
{
    cout << "Enter two doubles: ";
    cin >> x >> y;
}
void get_input(int& x, int& y, int& z)
{
    cout << "Enter three integers: ";
    cin >> x >> y >> z;
}
