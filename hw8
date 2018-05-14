/* Juan Garcia
 * Mrs. Connolly, CMPS 221
 * March 7, 2013
 * Homework 8
 */

#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#define SZ 56

using namespace std;


struct StudentRecord
{
    char name[30];
    char ID[10];
    int scores[4];
    double overall;
};

void getStudent(StudentRecord&);
void getAllStudents(StudentRecord [], int&);
void printStudent(const StudentRecord&);
void printAllStudents(StudentRecord [], int);
void printSelectedStudent(const StudentRecord [], int);


int main()
{
    StudentRecord studentlist[35];

    int selection = -1;
    int size = 0;

    while(selection != 0)
    {
        cout << "Welcome to the StudentRecord Gradebook" << endl;
        cout << "=============================================" << endl;
        cout << "1. Enter student data for the class" << endl;
        cout << "2. Print all student records" << endl;
        cout << "3. Print a single student record" << endl;
        cout << endl;
        cout << "0. Exit" << endl;
        cout << "=============================================" << endl;
        cout << "Enter selection: ";
        cin >> selection;

        switch(selection)
        {
            case 1:
                getAllStudents(studentlist, size);
                break;
            case 2:
                printAllStudents(studentlist, size);
                break;
            case 3:
                printSelectedStudent(studentlist, size);
                break;
            case 0:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "You entered an invalid choice! Try again." << endl;
        }
    }
    return 0;
}
void getStudent(/*const*/ StudentRecord& stu)
{
    cout << "Enter name: ";
    cin.ignore();
    cin.getline(stu.name, 30);
    do
    {
        cout << "Enter student ID: ";
        cin.getline(stu.ID, 10);

        /*while(!isdigit(stu.ID))
        {
            cout << "Not a valid ID." << endl;;
            cout << "Enter Student ID: ";
            cin.clear();
            cin.ignore(1000,'\n');
        }*/

    }while(strlen(stu.ID) != 9 );


    for(int i = 0; i < 4; i++)
    {
        cout << "Enter score for test" << i+1 << ": ";
        cin >> stu.scores[i];
    }
    stu.overall =  (double)(stu.scores[0]+stu.scores[1]+stu.scores[2]+stu.scores[3]) / 4;
    cout << "Overall course grade is: " << stu.overall << endl;
}
void getAllStudents(StudentRecord arr[], int& size)
{
    cout << "How many students?";
    cin >> size;
    while(size < 0 || size > 35)
    {
        cout << "Invalid number of students." << "Enter a value between 0 & 35" << endl;
        cout << "Enter number of students";
        cin >> size;
    }
    for(int i = 0; i < size; i++)
    {
        getStudent(arr[i]);
    }
}
void printStudent(const StudentRecord& stu)
{
    cout << left << setw(30) << stu.name;
    cout << setw(10) << stu.ID;
    for(int i = 0; i < 4; i++)
    {
        cout << setw(4) << stu.scores[i];
    }
    cout << setprecision(2) << setw(4) << fixed << stu.overall << "%";
    cout << endl;
}
void printAllStudents(StudentRecord arr[], int size)
{
    if(size == 0)
    {
        cout << "No Students" << endl;
        return;
    }
    cout << left << setw(30) << "Name" << setw(10) << "ID" << setw(16) << "Exam Grades" << setw(4) << "Overall Grade" << endl;
    for(int i = 0; i < size; i++)
    {
        printStudent(arr[i]);
    }
}
void printSelectedStudent(const StudentRecord arr[], int size)
{
    int x;

    if(size == 0)
    {
        cout << "No Students" << endl;
        return;
    }
    cout << "Enter student number: ";
    cin >> x;
   if(x < 0 || x > size-1)
   {
     cout << "Invalid Number" << endl;
     return;
   }
   else
       printStudent(arr[x]);
}
