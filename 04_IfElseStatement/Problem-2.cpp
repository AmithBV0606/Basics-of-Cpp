#include <iostream>
using namespace std;

/*
A school has following rules for grading system:
a. Below 25 – F
b. 25 to 44 – E
c. 45 to 49 – D
d. 50 to 59 – C
e. 60 to 79 – B
f. 80 to 100 – A
Ask user to enter marks and print the corresponding grade.
*/

int main()
{
    int marks;
    cin >> marks;

    if (marks >= 80 && marks <= 100)
    {
        cout << "Your grade is " << "A";
    }
    else if (marks >= 60 && marks <= 79)
    {
        cout << "Your grade is " << "B";
    }
    else if (marks >= 50 && marks <= 59)
    {
        cout << "Your grade is " << "C";
    }
    else if (marks >= 45 && marks <= 49)
    {
        cout << "Your grade is " << "D";
    }
    else if (marks >= 25 && marks <= 44)
    {
        cout << "Your grade is " << "E";
    }
    else if (marks < 25 && marks >= 0)
    {
        cout << "You FAILED!!!";
    }
    return 0;
}