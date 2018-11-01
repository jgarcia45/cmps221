//Juan Garcia
//Mrs. Connolly, CMPS 221
//January 31,2013
//Lab 6

#include <iostream>
#include <cmath>
using namespace std;

//Prototype
double falling_distance(double);

int main()
{
    double s;

    for (int i = 1; i <= 10; i++)
    {
        cout <<"The distance the object falls is: "<< falling_distance(i)<<endl;
    }

    return 0;

}

//Definition
double falling_distance(double sec)
{
    double distance;
    //d = (1/2)gt^2

    distance = (.5) * 9.8 * pow(sec,2);

    return distance;
}
