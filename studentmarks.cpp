#include <iostream>
#include<string>
using namespace std;

class Student
{
    char name[2];
    int m1, m2, sum, roll;

public:
    void accept()
    {
        cout << "Enter your Name : ";
        cin >> name;
        cout << "Roll : ";
        cin >> roll;
        cout << "Enter marks : ";
        cin >> m1;
        cin >> m2;
    }

    void display()
    {
        cout << "Total Marks : " << m1 + m2 << "\n";
    }
}; // semi-colon is to be written after a class in c++

int main() // main function always outside the class
{
    Student s1; // class object
    s1.accept();
    s1.display();
    return 0;
}