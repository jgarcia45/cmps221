//Juan Garcia
//Mrs. Connolly, CMPS 221
//February 5, 2013
//Lab7

#include <iostream>
#include <cmath>
using namespace std;

//Prototypes
int getValue();
void PrintTwo(int,int);
int SumOfTwo(int,int);
double AvgOfTwo(int,int);
int MaxOfTwo(int,int);
int MinOfTwo(int,int);
void PrintThree(int,int,int);
int SumOfThree(int,int,int);
double AvgOfThree(int,int,int);
int MaxOfThree(int,int,int);
int MinOfThree(int,int,int);

//Main
int main()
{
    int a,b,c;
    int sum,max,min;
    double avg;

    a = getValue();
    b = getValue();
    c = getValue();
    PrintTwo(a,b);

    sum = SumOfTwo(a,b);
    cout << "Sum = " << sum << endl;
    avg = AvgOfTwo(a,b);
    cout << "Average = " << avg << endl;
    max = MaxOfTwo(a,b);
    cout << "Max = " << max << endl;
    min = MinOfTwo(a,b);
    cout << "Min = " << min << endl;

    PrintThree(a,b,c);
    cout << "Sum = " << SumOfThree(a,b,c) << endl;
    cout << "Average = " << AvgOfThree(a,b,c) << endl;
    cout << "Max = " << MaxOfThree(a,b,c) << endl;
    cout << "Min = " << MinOfThree(a,b,c) << endl;
}

//Definitions
int getValue()
{
    int value;

    cout << "Enter A Value: ";
    cin >> value;
    return value;
}
void PrintTwo(int x,int y)
{
    cout << "The first two values are: " << x << ", " << y << endl;
}
int SumOfTwo(int x,int y)
{
    int total;

    total = x + y;
    return total;
}
double AvgOfTwo(int x,int y)
{
    double average;

    average = (double)(x + y) / 2;
    return average;
}
int MaxOfTwo(int x,int y)
{
    int max;

    if (x > y)
       max = x;
    else
       max = y;
   return max;
}
int MinOfTwo(int x,int y)
{
    int min;

    if (x < y)
        min = x;
    else
        min = y;
   return min;
}
void PrintThree(int x,int y,int z)
{
    cout << "The first three values are: " << x << ", " << y << ", " << z << endl;
}
int SumOfThree(int x,int y,int z)
{
    int total;

    total = x + y + z;
    return total;
}
double AvgOfThree(int x,int y,int z)
{
    double average;

    average = (double)(x + y +z) / 3;
    return average;
}
int MaxOfThree(int x,int y,int z)
{
    int max;

    if (x > y && x > z)
       max = x;
    else if (y > x && y > z)
       max = y;
    else
       max = z;
   return max;
}
int MinOfThree(int x,int y,int z)
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
