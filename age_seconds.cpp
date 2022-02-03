#include<iostream>
using namespace std;

int main()
{
    long age,sec;
    cout << "\nEnter your age (in years) : ";
    cin >> age;
    if(age < 1)
    {
        cout << "Invalid input. Enter data again...\n";
        return main();
    }
    else
    {
        cout << "Your age in seconds is : " << age*365*24*60*60 << "\n";
    }
    return 0;
} // end of main