#include <bits/stdc++.h>
using namespace std;

class Student
{
    string name;
    float cgpa;

public:
    friend void compare(Student stuOne, Student stuTwo);
};

void compare(Student stuOne, Student stuTwo)
{
    cout << "Enter Student One Name : ";
    getline(cin >> ws, stuOne.name);
    cout << "Enter Student One CGPA : ";
    cin >> stuOne.cgpa;
    cout << "Enter Student Two Name : ";
    getline(cin >> ws, stuTwo.name);
    cout << "Enter Student Two CGPA : ";
    cin >> stuTwo.cgpa;
    cout << stuOne.name << "'s CGPA : " << stuOne.cgpa << endl;
    cout << stuTwo.name << "'s CGPA : " << stuTwo.cgpa << endl;
    if (stuOne.cgpa > stuTwo.cgpa)
    {
        cout << stuOne.name << " Is the Topper" << endl;
    }
    else if (stuOne.cgpa < stuTwo.cgpa)
    {
        cout << stuTwo.name << " Is the Topper" << endl;
    }
    else
    {
        cout << "Its a draw between them" << endl;
    }
}

int main()
{
    Student one;
    Student two;
    compare(one, two);
}