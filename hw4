//Juan Garcia
//Mrs. Connolly, CMPS 221
//February 5, 2013
//Homework 4

#include <iostream>
using namespace std;

//Prototypes
double getScore();

double calcAverage(double score1,double score2,double score3,double score4,double score5);

double findLowest(double score1,double score2,double score3,double score4,double score5);

bool ifPass(double average);

void printResult(bool passValue);

//Call in main
int main()
{
    int a,b,c,d,e;
    int min;
    double avg;
    bool x;

    a = getScore();
    b = getScore();
    c = getScore();
    d = getScore();
    e = getScore();

    avg = calcAverage(a,b,c,d,e);
    cout << "The average of the 4 highest test scores is: " << avg << endl;
    min = findLowest(a,b,c,d,e);
    cout << "The lowest test score is: " << min << endl;
    x = ifPass(avg);
    printResult(x);
}

//Definition
double getScore()
{
    double score;

    cout << "Enter Score: ";
    cin >> score;
    return score;
}
double calcAverage(double score1,double score2,double score3,double score4,double score5)
{
    double average;

    average = (double)((score1 + score2 + score3 + score4 + score5) - findLowest(score1,score2,score3,score4,score5)) / 4;
    return average;
}
double findLowest(double score1, double score2,double score3,double score4,double score5)
{
    int min;

    if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
        min = score1;
    else if (score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5)
        min = score2;
    else if (score3 < score1 && score3 < score2 && score3 < score4 && score3 < score5)
        min = score3;
    else if (score4 < score1 && score4 < score2 && score4 < score3 && score4 < score5)
        min = score4;
    else
        min = score5;
    return min;
}
bool ifPass(double average)
{
    if (average > 70)
        return true;
    else
        return false;
}
void printResult(bool passValue)
{
    if (passValue)
        cout << "Congrats!" << endl;
    else
        cout << "You Failed." << endl;
}
